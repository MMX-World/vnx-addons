
// AUTO GENERATED by vnxcppcodegen

#include <vnx/addons/package.hxx>
#include <vnx/addons/HttpComponent_http_request_chunk.hxx>
#include <vnx/Value.h>
#include <vnx/addons/HttpComponent_http_request_chunk_return.hxx>
#include <vnx/addons/HttpRequest.hxx>

#include <vnx/vnx.h>


namespace vnx {
namespace addons {


const vnx::Hash64 HttpComponent_http_request_chunk::VNX_TYPE_HASH(0x97e79d08440406d5ull);
const vnx::Hash64 HttpComponent_http_request_chunk::VNX_CODE_HASH(0xdf14ce32016fd45aull);

vnx::Hash64 HttpComponent_http_request_chunk::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string HttpComponent_http_request_chunk::get_type_name() const {
	return "vnx.addons.HttpComponent.http_request_chunk";
}

const vnx::TypeCode* HttpComponent_http_request_chunk::get_type_code() const {
	return vnx::addons::vnx_native_type_code_HttpComponent_http_request_chunk;
}

std::shared_ptr<HttpComponent_http_request_chunk> HttpComponent_http_request_chunk::create() {
	return std::make_shared<HttpComponent_http_request_chunk>();
}

std::shared_ptr<vnx::Value> HttpComponent_http_request_chunk::clone() const {
	return std::make_shared<HttpComponent_http_request_chunk>(*this);
}

void HttpComponent_http_request_chunk::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void HttpComponent_http_request_chunk::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void HttpComponent_http_request_chunk::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = vnx::addons::vnx_native_type_code_HttpComponent_http_request_chunk;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, request);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, sub_path);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, offset);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, max_bytes);
	_visitor.type_end(*_type_code);
}

void HttpComponent_http_request_chunk::write(std::ostream& _out) const {
	_out << "{\"__type\": \"vnx.addons.HttpComponent.http_request_chunk\"";
	_out << ", \"request\": "; vnx::write(_out, request);
	_out << ", \"sub_path\": "; vnx::write(_out, sub_path);
	_out << ", \"offset\": "; vnx::write(_out, offset);
	_out << ", \"max_bytes\": "; vnx::write(_out, max_bytes);
	_out << "}";
}

void HttpComponent_http_request_chunk::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object HttpComponent_http_request_chunk::to_object() const {
	vnx::Object _object;
	_object["__type"] = "vnx.addons.HttpComponent.http_request_chunk";
	_object["request"] = request;
	_object["sub_path"] = sub_path;
	_object["offset"] = offset;
	_object["max_bytes"] = max_bytes;
	return _object;
}

void HttpComponent_http_request_chunk::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "max_bytes") {
			_entry.second.to(max_bytes);
		} else if(_entry.first == "offset") {
			_entry.second.to(offset);
		} else if(_entry.first == "request") {
			_entry.second.to(request);
		} else if(_entry.first == "sub_path") {
			_entry.second.to(sub_path);
		}
	}
}

vnx::Variant HttpComponent_http_request_chunk::get_field(const std::string& _name) const {
	if(_name == "request") {
		return vnx::Variant(request);
	}
	if(_name == "sub_path") {
		return vnx::Variant(sub_path);
	}
	if(_name == "offset") {
		return vnx::Variant(offset);
	}
	if(_name == "max_bytes") {
		return vnx::Variant(max_bytes);
	}
	return vnx::Variant();
}

void HttpComponent_http_request_chunk::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "request") {
		_value.to(request);
	} else if(_name == "sub_path") {
		_value.to(sub_path);
	} else if(_name == "offset") {
		_value.to(offset);
	} else if(_name == "max_bytes") {
		_value.to(max_bytes);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const HttpComponent_http_request_chunk& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, HttpComponent_http_request_chunk& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* HttpComponent_http_request_chunk::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> HttpComponent_http_request_chunk::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "vnx.addons.HttpComponent.http_request_chunk";
	type_code->type_hash = vnx::Hash64(0x97e79d08440406d5ull);
	type_code->code_hash = vnx::Hash64(0xdf14ce32016fd45aull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::vnx::addons::HttpComponent_http_request_chunk);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<HttpComponent_http_request_chunk>(); };
	type_code->is_const = true;
	type_code->is_async = true;
	type_code->return_type = ::vnx::addons::HttpComponent_http_request_chunk_return::static_get_type_code();
	type_code->fields.resize(4);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "request";
		field.code = {16};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "sub_path";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 8;
		field.name = "offset";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 8;
		field.name = "max_bytes";
		field.code = {8};
	}
	type_code->build();
	return type_code;
}


} // namespace vnx
} // namespace addons


namespace vnx {

void read(TypeInput& in, ::vnx::addons::HttpComponent_http_request_chunk& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.offset, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.max_bytes, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.request, type_code, _field->code.data()); break;
			case 1: vnx::read(in, value.sub_path, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::vnx::addons::HttpComponent_http_request_chunk& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = vnx::addons::vnx_native_type_code_HttpComponent_http_request_chunk;
		out.write_type_code(type_code);
		vnx::write_class_header<::vnx::addons::HttpComponent_http_request_chunk>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(16);
	vnx::write_value(_buf + 0, value.offset);
	vnx::write_value(_buf + 8, value.max_bytes);
	vnx::write(out, value.request, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.sub_path, type_code, type_code->fields[1].code.data());
}

void read(std::istream& in, ::vnx::addons::HttpComponent_http_request_chunk& value) {
	value.read(in);
}

void write(std::ostream& out, const ::vnx::addons::HttpComponent_http_request_chunk& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::vnx::addons::HttpComponent_http_request_chunk& value) {
	value.accept(visitor);
}

} // vnx
