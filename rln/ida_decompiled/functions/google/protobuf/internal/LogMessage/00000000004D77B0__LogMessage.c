/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D77B0
 * Mangled: _ZN6google8protobuf8internal10LogMessageC2ENS0_8LogLevelEPKci
 * Demangled: google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *
 * Callers: 1
 *   0x00000000001F63F0  google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004D77B8 string=0x00000000004D77BC "h"
 *   insn=0x00000000004D77BC string=0x00000000004D77C0 ""
 *   insn=0x00000000004D77C0 string=0x00000000004D77C4 "a"
 *   insn=0x00000000004D77C4 string=0x00000000004D77C8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::LogMessage::LogMessage(__int64 result, int a2, __int64 a3, int a4)
{
  *(_DWORD *)result = a2;
  *(_QWORD *)(result + 8) = a3;
  *(_DWORD *)(result + 16) = a4;
  *(_QWORD *)(result + 24) = &byte_6FD2F8;
  return result;
}

