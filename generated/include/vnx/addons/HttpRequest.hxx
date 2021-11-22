
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_addons_HttpRequest_HXX_
#define INCLUDE_vnx_addons_HttpRequest_HXX_

#include <vnx/addons/package.hxx>
#include <vnx/Buffer.hpp>
#include <vnx/Hash64.hpp>
#include <vnx/Value.h>
#include <vnx/addons/HttpSession.hxx>


namespace vnx {
namespace addons {

class HttpRequest : public ::vnx::Value {
public:
	
	uint64_t id = 0;
	std::string url;
	std::string path;
	std::string method;
	std::string content_type;
	std::map<std::string, std::string> cookies;
	std::map<std::string, std::string> query_params;
	std::vector<std::pair<std::string, std::string>> headers;
	::vnx::Buffer payload;
	::vnx::Hash64 stream;
	std::shared_ptr<const ::vnx::addons::HttpSession> session;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x60c4b7b39fc56fd5ull;
	
	HttpRequest() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	virtual std::string get_header_value(const std::string& key = "") const;
	
	static std::shared_ptr<HttpRequest> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const HttpRequest& _value);
	friend std::istream& operator>>(std::istream& _in, HttpRequest& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace vnx
} // namespace addons


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_addons_HttpRequest_HXX_
