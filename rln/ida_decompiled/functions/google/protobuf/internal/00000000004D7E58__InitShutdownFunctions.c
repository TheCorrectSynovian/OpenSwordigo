/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7E58
 * Mangled: _ZN6google8protobuf8internal21InitShutdownFunctionsEv
 * Demangled: google::protobuf::internal::InitShutdownFunctions(void)
 *
 * Callers: 2
 *   0x00000000004D7394  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000004D7ECC  google::protobuf::ShutdownProtobufLibrary(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FDA80  .pthread_mutex_init
 *   0x00000000004D7ECC  google::protobuf::ShutdownProtobufLibrary(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x00000000004D7E68 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D7E74 string=0x00000000004D7E78 "mE"
 *   insn=0x00000000004D7E90 string=0x00000000004D7E94 "`"
 *   insn=0x00000000004D7E9C string=0x00000000004D7EA0 "h"
 *   insn=0x00000000004D7E9C string=0x00000000001FDA80 "0'"
 *   insn=0x00000000004D7EA0 string=0x00000000004D7EA4 ""
 *   insn=0x00000000004D7EC0 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::InitShutdownFunctions(google::protobuf::internal *this)
{
  _QWORD *v1; // x0
  pthread_mutex_t **v2; // x19
  pthread_mutex_t *v3; // x0
  __int64 result; // x0

  v1 = (_QWORD *)operator new(0x18u);
  v1[1] = 0;
  v1[2] = 0;
  *v1 = 0;
  google::protobuf::internal::shutdown_functions = (__int64)v1;
  v2 = (pthread_mutex_t **)operator new(8u);
  v3 = (pthread_mutex_t *)operator new(0x28u);
  *v2 = v3;
  result = pthread_mutex_init(v3, 0);
  google::protobuf::internal::shutdown_functions_mutex = (__int64)v2;
  return result;
}

