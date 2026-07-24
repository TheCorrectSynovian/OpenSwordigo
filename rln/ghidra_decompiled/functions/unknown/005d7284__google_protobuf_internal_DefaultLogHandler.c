/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d7284
 * Function: google::protobuf::internal::DefaultLogHandler
 * Signature: undefined __cdecl DefaultLogHandler(LogLevel param_1, char * param_2, int param_3, string * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::DefaultLogHandler(google::protobuf::LogLevel, char const*, int,
   std::string const&) */

int google::protobuf::internal::DefaultLogHandler
              (ulong param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  FILE *__stream;
  int iVar1;
  
  __stream = (FILE *)(PTR___sF_007e5cd0 + 0x130);
  fprintf(__stream,"libprotobuf %s %s:%d] %s\n",(&PTR_DAT_007d8230)[param_1 & 0xffffffff],param_2,
          param_3 & 0xffffffff,*param_4);
  iVar1 = fflush(__stream);
  return iVar1;
}


