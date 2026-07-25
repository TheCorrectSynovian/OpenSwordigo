/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D7FA4
 * Mangled: _ZN6google8protobuf8internal16FunctionClosure03RunEv
 * Demangled: google::protobuf::internal::FunctionClosure0::Run(void)
 *
 * Callers: 1
 *   0x00000000004D7ECC  google::protobuf::ShutdownProtobufLibrary(void)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000004D7FB0 string=0x00000000004D7FB4 "h"
 *   insn=0x00000000004D7FB8 string=0x00000000004D7FBC "3"
 *   insn=0x00000000004D7FBC string=0x00000000004D7FC0 "hB@9"
 *   insn=0x00000000004D7FC4 string=0x00000000004D7FC8 "h"
 *   insn=0x00000000004D7FD8 string=0x00000000004D7FDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::FunctionClosure0::Run(__int64 (**this)(void))
{
  __int64 result; // x0

  result = this[1]();
  if ( this )
  {
    if ( *((_BYTE *)this + 16) )
      return (*((__int64 (__fastcall **)(__int64 (**)(void)))*this + 1))(this);
  }
  return result;
}

