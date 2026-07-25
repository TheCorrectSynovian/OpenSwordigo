/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7ECC
 * Mangled: _ZN6google8protobuf23ShutdownProtobufLibraryEv
 * Demangled: google::protobuf::ShutdownProtobufLibrary(void)
 *
 * Callers: 1
 *   0x00000000004D7E58  google::protobuf::internal::InitShutdownFunctions(void)
 *
 * Callees: 6
 *   0x00000000001F60A0  .pthread_once
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200080  .pthread_mutex_destroy
 *   0x00000000004D7E58  google::protobuf::internal::InitShutdownFunctions(void)
 *   0x00000000004D7FA4  google::protobuf::internal::FunctionClosure0::Run(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 22
 *   insn=0x00000000004D7ED8 string=0x00000000004D7EDC "`"
 *   insn=0x00000000004D7EE4 string=0x00000000004D7EE8 "!4G"
 *   insn=0x00000000004D7EE8 string=0x00000000004D7EEC "mx"
 *   insn=0x00000000004D7EEC string=0x00000000001F60A0 "0'"
 *   insn=0x00000000004D7EF8 string=0x00000000004D7EFC "3"
 *   insn=0x00000000004D7EFC string=0x00000000004D7F00 "h&@"
 *   insn=0x00000000004D7F00 string=0x00000000004D7F04 "?"
 *   insn=0x00000000004D7F08 string=0x00000000004D7F38 "`"
 *   insn=0x00000000004D7F0C string=0x00000000004D7F10 "yu"
 *   insn=0x00000000004D7F1C string=0x00000000004D7F20 "h&@"
 *   insn=0x00000000004D7F20 string=0x00000000004D7F24 ")"
 *   insn=0x00000000004D7F24 string=0x00000000004D7F28 ")"
 *   insn=0x00000000004D7F28 string=0x00000000004D7F2C "?"
 *   insn=0x00000000004D7F2C string=0x00000000004D7F30 ""
 *   insn=0x00000000004D7F34 string=0x00000000004D7F4C "u"
 *   insn=0x00000000004D7F38 string=0x00000000004D7F3C "@"
 *   insn=0x00000000004D7F40 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004D7F5C string=0x00000000004D7F60 "`"
 *   insn=0x00000000004D7F60 string=0x00000000004D7F64 "G"
 *   insn=0x00000000004D7F64 string=0x00000000004D7F68 "`"
 *   insn=0x00000000004D7F68 string=0x00000000004D7F6C "@"
 *   insn=0x00000000004D7F9C string=0x00000000004D7FA0 "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall google::protobuf::ShutdownProtobufLibrary(google::protobuf *this)
{
  __int64 v1; // x0
  void **v2; // x19
  __int64 v3; // x8
  unsigned __int64 v4; // x21
  void **v5; // x19

  v1 = pthread_once(
         google::protobuf::internal::shutdown_functions_init,
         (void (*)(void))google::protobuf::internal::InitShutdownFunctions);
  v2 = (void **)google::protobuf::internal::shutdown_functions;
  if ( google::protobuf::internal::shutdown_functions )
  {
    v3 = *(_QWORD *)google::protobuf::internal::shutdown_functions;
    if ( *(_QWORD *)(google::protobuf::internal::shutdown_functions + 8) == *(_QWORD *)google::protobuf::internal::shutdown_functions )
      goto LABEL_16;
    v4 = 0;
    do
    {
      v1 = (*(__int64 (__fastcall **)(__int64))(v3 + 8 * v4))(v1);
      v2 = (void **)google::protobuf::internal::shutdown_functions;
      ++v4;
      v3 = *(_QWORD *)google::protobuf::internal::shutdown_functions;
    }
    while ( (__int64)(*(_QWORD *)(google::protobuf::internal::shutdown_functions + 8)
                    - *(_QWORD *)google::protobuf::internal::shutdown_functions) >> 3 > v4 );
    if ( google::protobuf::internal::shutdown_functions )
    {
LABEL_16:
      if ( *v2 )
        operator delete(*v2);
      operator delete(v2);
    }
    google::protobuf::internal::shutdown_functions = 0;
    v5 = (void **)google::protobuf::internal::shutdown_functions_mutex;
    if ( google::protobuf::internal::shutdown_functions_mutex )
    {
      pthread_mutex_destroy(*(pthread_mutex_t **)google::protobuf::internal::shutdown_functions_mutex);
      if ( *v5 )
        operator delete(*v5);
      operator delete(v5);
    }
    google::protobuf::internal::shutdown_functions_mutex = 0;
  }
}

