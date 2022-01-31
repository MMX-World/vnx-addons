
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_addons_HttpSession_HXX_
#define INCLUDE_vnx_addons_HttpSession_HXX_

#include <vnx/addons/package.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/Value.h>


namespace vnx {
namespace addons {

class HttpSession : public ::vnx::Value {
public:
	
	std::string user;
	std::string hsid;
	::vnx::Hash64 vsid;
	int64_t login_time = 0;
	int64_t session_timeout = 0;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xaf1b568d83351450ull;
	
	HttpSession() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<HttpSession> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const HttpSession& _value);
	friend std::istream& operator>>(std::istream& _in, HttpSession& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void HttpSession::accept_generic(T& _visitor) const {
	_visitor.template type_begin<HttpSession>(5);
	_visitor.type_field("user", 0); _visitor.accept(user);
	_visitor.type_field("hsid", 1); _visitor.accept(hsid);
	_visitor.type_field("vsid", 2); _visitor.accept(vsid);
	_visitor.type_field("login_time", 3); _visitor.accept(login_time);
	_visitor.type_field("session_timeout", 4); _visitor.accept(session_timeout);
	_visitor.template type_end<HttpSession>(5);
}


} // namespace vnx
} // namespace addons


namespace vnx {

} // vnx

#endif // INCLUDE_vnx_addons_HttpSession_HXX_
