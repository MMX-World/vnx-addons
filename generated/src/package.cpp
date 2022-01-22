
// AUTO GENERATED by vnxcppcodegen

#include <vnx/addons/CompressedValue.hxx>
#include <vnx/addons/DeflatedValue.hxx>
#include <vnx/addons/FileServerBase.hxx>
#include <vnx/addons/FileServer_delete_file.hxx>
#include <vnx/addons/FileServer_delete_file_return.hxx>
#include <vnx/addons/FileServer_get_file_info.hxx>
#include <vnx/addons/FileServer_get_file_info_return.hxx>
#include <vnx/addons/FileServer_read_directory.hxx>
#include <vnx/addons/FileServer_read_directory_return.hxx>
#include <vnx/addons/FileServer_read_file.hxx>
#include <vnx/addons/FileServer_read_file_return.hxx>
#include <vnx/addons/FileServer_read_file_range.hxx>
#include <vnx/addons/FileServer_read_file_range_return.hxx>
#include <vnx/addons/FileServer_write_file.hxx>
#include <vnx/addons/FileServer_write_file_return.hxx>
#include <vnx/addons/HttpChunk.hxx>
#include <vnx/addons/HttpComponent_http_request.hxx>
#include <vnx/addons/HttpComponent_http_request_return.hxx>
#include <vnx/addons/HttpComponent_http_request_chunk.hxx>
#include <vnx/addons/HttpComponent_http_request_chunk_return.hxx>
#include <vnx/addons/HttpData.hxx>
#include <vnx/addons/HttpRequest.hxx>
#include <vnx/addons/HttpResponse.hxx>
#include <vnx/addons/HttpServerBase.hxx>
#include <vnx/addons/HttpSession.hxx>
#include <vnx/addons/MsgServerBase.hxx>
#include <vnx/addons/TcpServerBase.hxx>
#include <vnx/addons/file_info_t.hxx>
#include <vnx/addons/permission_e.hxx>

#include <vnx/addons/package.hxx>
#include <vnx/vnx.h>



namespace vnx {

const TypeCode* type<::vnx::addons::CompressedValue>::get_type_code() {
	return vnx::addons::vnx_native_type_code_CompressedValue;
}

void type<::vnx::addons::CompressedValue>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::CompressedValue());
}

void type<::vnx::addons::CompressedValue>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::CompressedValue& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::DeflatedValue>::get_type_code() {
	return vnx::addons::vnx_native_type_code_DeflatedValue;
}

void type<::vnx::addons::DeflatedValue>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::DeflatedValue());
}

void type<::vnx::addons::DeflatedValue>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::DeflatedValue& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_delete_file>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_delete_file;
}

void type<::vnx::addons::FileServer_delete_file>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_delete_file());
}

void type<::vnx::addons::FileServer_delete_file>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_delete_file& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_delete_file_return>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_delete_file_return;
}

void type<::vnx::addons::FileServer_delete_file_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_delete_file_return());
}

void type<::vnx::addons::FileServer_delete_file_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_delete_file_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_get_file_info>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_get_file_info;
}

void type<::vnx::addons::FileServer_get_file_info>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_get_file_info());
}

void type<::vnx::addons::FileServer_get_file_info>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_get_file_info& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_get_file_info_return>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_get_file_info_return;
}

void type<::vnx::addons::FileServer_get_file_info_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_get_file_info_return());
}

void type<::vnx::addons::FileServer_get_file_info_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_get_file_info_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_read_directory>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_read_directory;
}

void type<::vnx::addons::FileServer_read_directory>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_read_directory());
}

void type<::vnx::addons::FileServer_read_directory>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_read_directory& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_read_directory_return>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_read_directory_return;
}

void type<::vnx::addons::FileServer_read_directory_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_read_directory_return());
}

void type<::vnx::addons::FileServer_read_directory_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_read_directory_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_read_file>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_read_file;
}

void type<::vnx::addons::FileServer_read_file>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_read_file());
}

void type<::vnx::addons::FileServer_read_file>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_read_file& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_read_file_return>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_read_file_return;
}

void type<::vnx::addons::FileServer_read_file_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_read_file_return());
}

void type<::vnx::addons::FileServer_read_file_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_read_file_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_read_file_range>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_read_file_range;
}

void type<::vnx::addons::FileServer_read_file_range>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_read_file_range());
}

void type<::vnx::addons::FileServer_read_file_range>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_read_file_range& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_read_file_range_return>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_read_file_range_return;
}

void type<::vnx::addons::FileServer_read_file_range_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_read_file_range_return());
}

void type<::vnx::addons::FileServer_read_file_range_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_read_file_range_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_write_file>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_write_file;
}

void type<::vnx::addons::FileServer_write_file>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_write_file());
}

void type<::vnx::addons::FileServer_write_file>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_write_file& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::FileServer_write_file_return>::get_type_code() {
	return vnx::addons::vnx_native_type_code_FileServer_write_file_return;
}

void type<::vnx::addons::FileServer_write_file_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::FileServer_write_file_return());
}

void type<::vnx::addons::FileServer_write_file_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::FileServer_write_file_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::HttpChunk>::get_type_code() {
	return vnx::addons::vnx_native_type_code_HttpChunk;
}

void type<::vnx::addons::HttpChunk>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::HttpChunk());
}

void type<::vnx::addons::HttpChunk>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::HttpChunk& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::HttpComponent_http_request>::get_type_code() {
	return vnx::addons::vnx_native_type_code_HttpComponent_http_request;
}

void type<::vnx::addons::HttpComponent_http_request>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::HttpComponent_http_request());
}

void type<::vnx::addons::HttpComponent_http_request>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::HttpComponent_http_request& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::HttpComponent_http_request_return>::get_type_code() {
	return vnx::addons::vnx_native_type_code_HttpComponent_http_request_return;
}

void type<::vnx::addons::HttpComponent_http_request_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::HttpComponent_http_request_return());
}

void type<::vnx::addons::HttpComponent_http_request_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::HttpComponent_http_request_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::HttpComponent_http_request_chunk>::get_type_code() {
	return vnx::addons::vnx_native_type_code_HttpComponent_http_request_chunk;
}

void type<::vnx::addons::HttpComponent_http_request_chunk>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::HttpComponent_http_request_chunk());
}

void type<::vnx::addons::HttpComponent_http_request_chunk>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::HttpComponent_http_request_chunk& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::HttpComponent_http_request_chunk_return>::get_type_code() {
	return vnx::addons::vnx_native_type_code_HttpComponent_http_request_chunk_return;
}

void type<::vnx::addons::HttpComponent_http_request_chunk_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::HttpComponent_http_request_chunk_return());
}

void type<::vnx::addons::HttpComponent_http_request_chunk_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::HttpComponent_http_request_chunk_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::HttpData>::get_type_code() {
	return vnx::addons::vnx_native_type_code_HttpData;
}

void type<::vnx::addons::HttpData>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::HttpData());
}

void type<::vnx::addons::HttpData>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::HttpData& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::HttpRequest>::get_type_code() {
	return vnx::addons::vnx_native_type_code_HttpRequest;
}

void type<::vnx::addons::HttpRequest>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::HttpRequest());
}

void type<::vnx::addons::HttpRequest>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::HttpRequest& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::HttpResponse>::get_type_code() {
	return vnx::addons::vnx_native_type_code_HttpResponse;
}

void type<::vnx::addons::HttpResponse>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::HttpResponse());
}

void type<::vnx::addons::HttpResponse>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::HttpResponse& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::HttpSession>::get_type_code() {
	return vnx::addons::vnx_native_type_code_HttpSession;
}

void type<::vnx::addons::HttpSession>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::HttpSession());
}

void type<::vnx::addons::HttpSession>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::HttpSession& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::file_info_t>::get_type_code() {
	return vnx::addons::vnx_native_type_code_file_info_t;
}

void type<::vnx::addons::file_info_t>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::file_info_t());
}

void type<::vnx::addons::file_info_t>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::file_info_t& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::vnx::addons::permission_e>::get_type_code() {
	return vnx::addons::vnx_native_type_code_permission_e;
}

void type<::vnx::addons::permission_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::vnx::addons::permission_e());
}

void type<::vnx::addons::permission_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::vnx::addons::permission_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}


} // namespace vnx


namespace vnx {
namespace addons {


static void register_all_types() {
	vnx::register_type_code(::vnx::addons::CompressedValue::static_create_type_code());
	vnx::register_type_code(::vnx::addons::DeflatedValue::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServerBase::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_delete_file::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_delete_file_return::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_get_file_info::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_get_file_info_return::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_read_directory::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_read_directory_return::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_read_file::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_read_file_return::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_read_file_range::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_read_file_range_return::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_write_file::static_create_type_code());
	vnx::register_type_code(::vnx::addons::FileServer_write_file_return::static_create_type_code());
	vnx::register_type_code(::vnx::addons::HttpChunk::static_create_type_code());
	vnx::register_type_code(::vnx::addons::HttpComponent_http_request::static_create_type_code());
	vnx::register_type_code(::vnx::addons::HttpComponent_http_request_return::static_create_type_code());
	vnx::register_type_code(::vnx::addons::HttpComponent_http_request_chunk::static_create_type_code());
	vnx::register_type_code(::vnx::addons::HttpComponent_http_request_chunk_return::static_create_type_code());
	vnx::register_type_code(::vnx::addons::HttpData::static_create_type_code());
	vnx::register_type_code(::vnx::addons::HttpRequest::static_create_type_code());
	vnx::register_type_code(::vnx::addons::HttpResponse::static_create_type_code());
	vnx::register_type_code(::vnx::addons::HttpServerBase::static_create_type_code());
	vnx::register_type_code(::vnx::addons::HttpSession::static_create_type_code());
	vnx::register_type_code(::vnx::addons::MsgServerBase::static_create_type_code());
	vnx::register_type_code(::vnx::addons::TcpServerBase::static_create_type_code());
	vnx::register_type_code(::vnx::addons::file_info_t::static_create_type_code());
	vnx::register_type_code(::vnx::addons::permission_e::static_create_type_code());
}

static struct vnx_static_init {
	vnx_static_init() {
		register_all_types();
	}
} vnx_static_init_;

const vnx::TypeCode* const vnx_native_type_code_CompressedValue = vnx::get_type_code(vnx::Hash64(0x50c46e244bd9765dull));
const vnx::TypeCode* const vnx_native_type_code_DeflatedValue = vnx::get_type_code(vnx::Hash64(0xe3d58522f6fb225dull));
const vnx::TypeCode* const vnx_native_type_code_FileServerBase = vnx::get_type_code(vnx::Hash64(0xcf578d3ac2b39852ull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_delete_file = vnx::get_type_code(vnx::Hash64(0x5e72c602475397dull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_delete_file_return = vnx::get_type_code(vnx::Hash64(0x9b416f881a10c735ull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_get_file_info = vnx::get_type_code(vnx::Hash64(0xd0dde082f276b7f1ull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_get_file_info_return = vnx::get_type_code(vnx::Hash64(0x7474b955a2e57c37ull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_read_directory = vnx::get_type_code(vnx::Hash64(0xa5cb89d5e0389183ull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_read_directory_return = vnx::get_type_code(vnx::Hash64(0xbbc77a6b51623776ull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_read_file = vnx::get_type_code(vnx::Hash64(0x36d7fc9c72b884e6ull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_read_file_return = vnx::get_type_code(vnx::Hash64(0x4a437b9075a6f5b4ull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_read_file_range = vnx::get_type_code(vnx::Hash64(0x1294e2e1e6847490ull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_read_file_range_return = vnx::get_type_code(vnx::Hash64(0x19b4b9347295c6eaull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_write_file = vnx::get_type_code(vnx::Hash64(0xf08166843cfcec65ull));
const vnx::TypeCode* const vnx_native_type_code_FileServer_write_file_return = vnx::get_type_code(vnx::Hash64(0x88bc45fec5f73d30ull));
const vnx::TypeCode* const vnx_native_type_code_HttpChunk = vnx::get_type_code(vnx::Hash64(0x34dddafe7f03674bull));
const vnx::TypeCode* const vnx_native_type_code_HttpComponent_http_request = vnx::get_type_code(vnx::Hash64(0xe0b6c38f619bad92ull));
const vnx::TypeCode* const vnx_native_type_code_HttpComponent_http_request_return = vnx::get_type_code(vnx::Hash64(0x767ca843058ef233ull));
const vnx::TypeCode* const vnx_native_type_code_HttpComponent_http_request_chunk = vnx::get_type_code(vnx::Hash64(0x97e79d08440406d5ull));
const vnx::TypeCode* const vnx_native_type_code_HttpComponent_http_request_chunk_return = vnx::get_type_code(vnx::Hash64(0x658054b78953521aull));
const vnx::TypeCode* const vnx_native_type_code_HttpData = vnx::get_type_code(vnx::Hash64(0x9dd32e8dd92cbef5ull));
const vnx::TypeCode* const vnx_native_type_code_HttpRequest = vnx::get_type_code(vnx::Hash64(0x60c4b7b39fc56fd5ull));
const vnx::TypeCode* const vnx_native_type_code_HttpResponse = vnx::get_type_code(vnx::Hash64(0xb907701490f0e0feull));
const vnx::TypeCode* const vnx_native_type_code_HttpServerBase = vnx::get_type_code(vnx::Hash64(0xf05b2d0ac45a8a7bull));
const vnx::TypeCode* const vnx_native_type_code_HttpSession = vnx::get_type_code(vnx::Hash64(0xaf1b568d83351450ull));
const vnx::TypeCode* const vnx_native_type_code_MsgServerBase = vnx::get_type_code(vnx::Hash64(0x869f9aab4c662096ull));
const vnx::TypeCode* const vnx_native_type_code_TcpServerBase = vnx::get_type_code(vnx::Hash64(0x336d98e915472200ull));
const vnx::TypeCode* const vnx_native_type_code_file_info_t = vnx::get_type_code(vnx::Hash64(0x7a1208fc71e8e919ull));
const vnx::TypeCode* const vnx_native_type_code_permission_e = vnx::get_type_code(vnx::Hash64(0x50d90a32b3efd091ull));

} // namespace vnx
} // namespace addons
