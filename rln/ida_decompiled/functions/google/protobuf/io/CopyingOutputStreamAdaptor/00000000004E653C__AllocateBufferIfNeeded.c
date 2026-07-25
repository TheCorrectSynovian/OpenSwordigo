/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E653C
 * Mangled: _ZN6google8protobuf2io26CopyingOutputStreamAdaptor22AllocateBufferIfNeededEv
 * Demangled: google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Referenced strings: 4
 *   insn=0x00000000004E6548 string=0x00000000004E654C "h"
 *   insn=0x00000000004E6550 string=0x00000000004E6554 "h*"
 *   insn=0x00000000004E6560 string=0x00000000004E6564 "`"
 *   insn=0x00000000004E6560 string=0x00000000001F8570 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::io::CopyingOutputStreamAdaptor::AllocateBufferIfNeeded(__int64 this)
{
  __int64 v1; // x19
  unsigned __int64 v2; // x0

  v1 = this;
  if ( !*(_QWORD *)(this + 32) )
  {
    if ( *(int *)(this + 40) < 0LL )
      v2 = -1;
    else
      v2 = *(int *)(this + 40);
    this = operator new[](v2);
    *(_QWORD *)(v1 + 32) = this;
  }
  return this;
}

