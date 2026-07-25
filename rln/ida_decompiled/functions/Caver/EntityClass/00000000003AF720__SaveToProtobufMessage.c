/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AF720
 * Mangled: _ZNK5Caver11EntityClass21SaveToProtobufMessageEPNS_5Proto11EntityClassE
 * Demangled: Caver::EntityClass::SaveToProtobufMessage(Caver::Proto::EntityClass *)
 *
 * Callers: 1
 *   0x00000000001F6C50  Caver::EntityClass::SaveToProtobufMessage(Caver::Proto::EntityClass *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 27
 *   insn=0x00000000003AF738 string=0x00000000003AF73C "h.@"
 *   insn=0x00000000003AF73C string=0x00000000003AF740 "`\n@"
 *   insn=0x00000000003AF740 string=0x00000000003AF744 ")F"
 *   insn=0x00000000003AF744 string=0x00000000003AF748 ""
 *   insn=0x00000000003AF748 string=0x00000000003AF74C "h."
 *   insn=0x00000000003AF75C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003AF760 string=0x00000000003AF764 ""
 *   insn=0x00000000003AF764 string=0x00000000003AF768 "a"
 *   insn=0x00000000003AF768 string=0x00000000003AF76C ""
 *   insn=0x00000000003AF76C string=0x00000000003AF770 "`\n"
 *   insn=0x00000000003AF77C string=0x00000000003AF780 "h.@"
 *   insn=0x00000000003AF780 string=0x00000000003AF784 "`"
 *   insn=0x00000000003AF784 string=0x00000000003AF788 ")}C"
 *   insn=0x00000000003AF78C string=0x00000000003AF790 ""
 *   insn=0x00000000003AF790 string=0x00000000003AF794 "h."
 *   insn=0x00000000003AF7A8 string=0x00000000003AF7AC ""
 *   insn=0x00000000003AF7AC string=0x00000000003AF7B0 "a"
 *   insn=0x00000000003AF7B0 string=0x00000000003AF7B4 ""
 *   insn=0x00000000003AF7B4 string=0x00000000003AF7B8 "`"
 *   insn=0x00000000003AF7C4 string=0x00000000003AF7C8 "i.@"
 *   insn=0x00000000003AF7C8 string=0x00000000003AF7CC "h"
 *   insn=0x00000000003AF7D0 string=0x00000000003AF7D4 ")"
 *   insn=0x00000000003AF7D4 string=0x00000000003AF7D8 "h"
 *   insn=0x00000000003AF7DC string=0x00000000003AF7E0 "h"
 *   insn=0x00000000003AF7E4 string=0x00000000003AF7E8 "h"
 *   insn=0x00000000003AF7EC string=0x00000000003AF7F0 "i."
 *   insn=0x00000000003AF7F0 string=0x00000000003AF7F4 "hB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityClass::SaveToProtobufMessage(Caver::EntityClass *this, Caver::Proto::EntityClass *a2)
{
  __int64 *v4; // x0
  __int64 *v5; // x0
  __int64 result; // x0
  int v7; // w9
  __int64 v8; // x8

  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 11) |= 1u;
  if ( v4 == &Caver::Proto::EntityClass::_default_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  sub_56A6A8(v4);
  v5 = (__int64 *)*((_QWORD *)a2 + 3);
  *((_DWORD *)a2 + 11) |= 2u;
  if ( v5 == &Caver::Proto::EntityClass::_default_title_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 3) = v5;
  }
  result = sub_56A6A8(v5);
  v7 = *((_DWORD *)a2 + 11);
  *((_BYTE *)a2 + 32) = *((_BYTE *)this + 16);
  *((_BYTE *)a2 + 33) = *((_BYTE *)this + 17);
  *((_BYTE *)a2 + 34) = *((_BYTE *)this + 18);
  *((_BYTE *)a2 + 35) = *((_BYTE *)this + 19);
  v8 = *(_QWORD *)((char *)this + 20);
  *((_DWORD *)a2 + 11) = v7 | 0xFC;
  *(_QWORD *)((char *)a2 + 36) = v8;
  return result;
}

