/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d790c
 * Function: google::protobuf::SetLogHandler
 * Signature: undefined __cdecl SetLogHandler(_func_void_LogLevel_char_ptr_int_string_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::SetLogHandler(void (*)(google::protobuf::LogLevel, char const*, int,
   std::string const&)) */

undefined * google::protobuf::SetLogHandler(_func_void_LogLevel_char_ptr_int_string_ptr *param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (PTR_DefaultLogHandler_007e8900 != PTR_NullLogHandler_007e5690) {
    puVar1 = PTR_DefaultLogHandler_007e8900;
  }
  PTR_DefaultLogHandler_007e8900 = PTR_NullLogHandler_007e5690;
  if (param_1 != (_func_void_LogLevel_char_ptr_int_string_ptr *)0x0) {
    PTR_DefaultLogHandler_007e8900 = param_1;
  }
  return puVar1;
}


