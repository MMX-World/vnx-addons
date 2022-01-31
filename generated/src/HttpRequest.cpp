
// AUTO GENERATED by vnxcppcodegen

#include <vnx/addons/package.hxx>
#include <vnx/addons/HttpRequest.hxx>
#include <vnx/Buffer.hpp>
#include <vnx/Hash64.hpp>
#include <vnx/Value.h>
#include <vnx/addons/HttpSession.hxx>

#include <vnx/vnx.h>


namespace vnx {
namespace addons {


const vnx::Hash64 HttpRequest::VNX_TYPE_HASH(0x60c4b7b39fc56fd5ull);
const vnx::Hash64 HttpRequest::VNX_CODE_HASH(0x1fa06bc260cc3dfbull);

vnx::Hash64 HttpRequest::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string HttpRequest::get_type_name() const {
	return "vnx.addons.HttpRequest";
}

const vnx::TypeCode* HttpRequest::get_type_code() const {
	return vnx::addons::vnx_native_type_code_HttpRequest;
}

std::shared_ptr<HttpRequest> HttpRequest::create() {
	return std::make_shared<HttpRequest>();
}

std::shared_ptr<vnx::Value> HttpRequest::clone() const {
	return std::make_shared<HttpRequest>(*this);
}

void HttpRequest::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void HttpRequest::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void HttpRequest::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::addons::vnx_native_type_code_HttpRequest;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, id);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, url);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, path);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, method);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, content_type);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, cookies);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, query_params);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, headers);
	_visitor.type_field(_type_code->fields[8], 8); vnx::accept(_visitor, payload);
	_visitor.type_field(_type_code->fields[9], 9); vnx::accept(_visitor, stream);
	_visitor.type_field(_type_code->fields[10], 10); vnx::accept(_visitor, session);
	_visitor.type_end(*_type_code);
}

void HttpRequest::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.addons.HttpRequest\"";
	_out << ", \"id\": "; vnx::write(_out, id);
	_out << ", \"url\": "; vnx::write(_out, url);
	_out << ", \"path\": "; vnx::write(_out, path);
	_out << ", \"method\": "; vnx::write(_out, method);
	_out << ", \"content_type\": "; vnx::write(_out, content_type);
	_out << ", \"cookies\": "; vnx::write(_out, cookies);
	_out << ", \"query_params\": "; vnx::write(_out, query_params);
	_out << ", \"headers\": "; vnx::write(_out, headers);
	_out << ", \"payload\": "; vnx::write(_out, payload);
	_out << ", \"stream\": "; vnx::write(_out, stream);
	_out << ", \"session\": "; vnx::write(_out, session);
	_out << "}";
}

void HttpRequest::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object HttpRequest::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.addons.HttpRequest";
	_object["id"] = id;
	_object["url"] = url;
	_object["path"] = path;
	_object["method"] = method;
	_object["content_type"] = content_type;
	_object["cookies"] = cookies;
	_object["query_params"] = query_params;
	_object["headers"] = headers;
	_object["payload"] = payload;
	_object["stream"] = stream;
	_object["session"] = session;
	return _object;
}

void HttpRequest::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "content_type") {
			_entry.second.to(content_type);
		} else if(_entry.first == "cookies") {
			_entry.second.to(cookies);
		} else if(_entry.first == "headers") {
			_entry.second.to(headers);
		} else if(_entry.first == "id") {
			_entry.second.to(id);
		} else if(_entry.first == "method") {
			_entry.second.to(method);
		} else if(_entry.first == "path") {
			_entry.second.to(path);
		} else if(_entry.first == "payload") {
			_entry.second.to(payload);
		} else if(_entry.first == "query_params") {
			_entry.second.to(query_params);
		} else if(_entry.first == "session") {
			_entry.second.to(session);
		} else if(_entry.first == "stream") {
			_entry.second.to(stream);
		} else if(_entry.first == "url") {
			_entry.second.to(url);
		}
	}
}

vnx::Variant HttpRequest::get_field(const std::string& _name) const {
	if(_name == "id") {
		return vnx::Variant(id);
	}
	if(_name == "url") {
		return vnx::Variant(url);
	}
	if(_name == "path") {
		return vnx::Variant(path);
	}
	if(_name == "method") {
		return vnx::Variant(method);
	}
	if(_name == "content_type") {
		return vnx::Variant(content_type);
	}
	if(_name == "cookies") {
		return vnx::Variant(cookies);
	}
	if(_name == "query_params") {
		return vnx::Variant(query_params);
	}
	if(_name == "headers") {
		return vnx::Variant(headers);
	}
	if(_name == "payload") {
		return vnx::Variant(payload);
	}
	if(_name == "stream") {
		return vnx::Variant(stream);
	}
	if(_name == "session") {
		return vnx::Variant(session);
	}
	return vnx::Variant();
}

void HttpRequest::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "id") {
		_value.to(id);
	} else if(_name == "url") {
		_value.to(url);
	} else if(_name == "path") {
		_value.to(path);
	} else if(_name == "method") {
		_value.to(method);
	} else if(_name == "content_type") {
		_value.to(content_type);
	} else if(_name == "cookies") {
		_value.to(cookies);
	} else if(_name == "query_params") {
		_value.to(query_params);
	} else if(_name == "headers") {
		_value.to(headers);
	} else if(_name == "payload") {
		_value.to(payload);
	} else if(_name == "stream") {
		_value.to(stream);
	} else if(_name == "session") {
		_value.to(session);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const HttpRequest& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, HttpRequest& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* HttpRequest::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> HttpRequest::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.addons.HttpRequest";
	type_code->type_hash = vnx::Hash64(0x60c4b7b39fc56fd5ull);
	type_code->code_hash = vnx::Hash64(0x1fa06bc260cc3dfbull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::vnx::addons::HttpRequest);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<HttpRequest>(); };
	type_code->fields.resize(11);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "id";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "url";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "path";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "method";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "content_type";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[5];
		field.is_extended = true;
		field.name = "cookies";
		field.code = {13, 3, 32, 32};
	}
	{
		auto& field = type_code->fields[6];
		field.is_extended = true;
		field.name = "query_params";
		field.code = {13, 3, 32, 32};
	}
	{
		auto& field = type_code->fields[7];
		field.is_extended = true;
		field.name = "headers";
		field.code = {12, 23, 2, 4, 5, 32, 32};
	}
	{
		auto& field = type_code->fields[8];
		field.is_extended = true;
		field.name = "payload";
		field.code = {12, 1};
	}
	{
		auto& field = type_code->fields[9];
		field.is_extended = true;
		field.name = "stream";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[10];
		field.is_extended = true;
		field.name = "session";
		field.code = {16};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx
} // namespace addons


namespace vnx {

void read(TypeInput& in, ::vnx::addons::HttpRequest& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.id, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.url, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.path, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.method, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.content_type, type_code, _field->code.data()); break;
			case 5: vnx::read(in, value.cookies, type_code, _field->code.data()); break;
			case 6: vnx::read(in, value.query_params, type_code, _field->code.data()); break;
			case 7: vnx::read(in, value.headers, type_code, _field->code.data()); break;
			case 8: vnx::read(in, value.payload, type_code, _field->code.data()); break;
			case 9: vnx::read(in, value.stream, type_code, _field->code.data()); break;
			case 10: vnx::read(in, value.session, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::addons::HttpRequest& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::addons::vnx_native_type_code_HttpRequest;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::addons::HttpRequest>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.id);
	vnx::write(out, value.url, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.path, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.method, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.content_type, type_code, type_code->fields[4].code.data());
	vnx::write(out, value.cookies, type_code, type_code->fields[5].code.data());
	vnx::write(out, value.query_params, type_code, type_code->fields[6].code.data());
	vnx::write(out, value.headers, type_code, type_code->fields[7].code.data());
	vnx::write(out, value.payload, type_code, type_code->fields[8].code.data());
	vnx::write(out, value.stream, type_code, type_code->fields[9].code.data());
	vnx::write(out, value.session, type_code, type_code->fields[10].code.data());
}

void read(std::istream& in, ::vnx::addons::HttpRequest& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::addons::HttpRequest& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::addons::HttpRequest& value) {
	value.accept(visitor);
}

} // vnx
