/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BA870
 * Mangled: _ZN5Caver4Item23LoadFromProtobufMessageERKNS_5Proto4ItemE
 * Demangled: Caver::Item::LoadFromProtobufMessage(Caver::Proto::Item const&)
 *
 * Callers: 1
 *   0x00000000001F9420  Caver::Item::LoadFromProtobufMessage(Caver::Proto::Item const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 11
 *   insn=0x00000000003BA87C string=0x00000000003BA880 "a\n@"
 *   insn=0x00000000003BA88C string=0x00000000003BA890 "a"
 *   insn=0x00000000003BA898 string=0x00000000003BA89C "a"
 *   insn=0x00000000003BA8A4 string=0x00000000003BA8A8 "a"
 *   insn=0x00000000003BA8AC string=0x00000000003BA8B0 "~"
 *   insn=0x00000000003BA8B0 string=0x00000000003BA8B4 "h"
 *   insn=0x00000000003BA8B8 string=0x00000000003BA8BC "h"
 *   insn=0x00000000003BA8BC string=0x00000000003BA8C0 ""
 *   insn=0x00000000003BA8C4 string=0x00000000003BA8C8 "H"
 *   insn=0x00000000003BA8C8 string=0x00000000003BA8D0 "h>@"
 *   insn=0x00000000003BA8D4 string=0x00000000003BA8D8 "hBC"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Item::LoadFromProtobufMessage(Caver::Item *this, const Caver::Proto::Item *a2)
{
  __int64 result; // x0
  unsigned int v5; // w8

  sub_56A6A8((char *)this + 8);
  sub_56A6A8((char *)this + 16);
  sub_56A6A8((char *)this + 24);
  result = sub_56A6A8((char *)this + 32);
  *((_BYTE *)this + 40) = *((_BYTE *)a2 + 48);
  v5 = *((_DWORD *)a2 + 3) - 1;
  if ( v5 <= 4 )
    *(_DWORD *)this = v5;
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 15);
  *((_QWORD *)this + 6) = *(_QWORD *)((char *)a2 + 52);
  return result;
}

