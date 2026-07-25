/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BF918
 * Mangled: _ZNK5Caver7MapZone21SaveToProtobufMessageEPNS_5Proto7MapZoneE
 * Demangled: Caver::MapZone::SaveToProtobufMessage(Caver::Proto::MapZone *)
 *
 * Callers: 1
 *   0x00000000001F3D40  Caver::MapZone::SaveToProtobufMessage(Caver::Proto::MapZone *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 32
 *   insn=0x00000000003BF928 string=0x00000000003BF92C ")"
 *   insn=0x00000000003BF938 string=0x00000000003BF93C ")"
 *   insn=0x00000000003BF93C string=0x00000000003BF940 ""
 *   insn=0x00000000003BF950 string=0x00000000003BF954 "#"
 *   insn=0x00000000003BF954 string=0x00000000003BF958 "("
 *   insn=0x00000000003BF954 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BF958 string=0x00000000003BF95C ""
 *   insn=0x00000000003BF95C string=0x00000000003BF960 "a"
 *   insn=0x00000000003BF960 string=0x00000000003BF964 ""
 *   insn=0x00000000003BF96C string=0x00000000003BF970 "N"
 *   insn=0x00000000003BF970 string=0x00000000003BF974 "I"
 *   insn=0x00000000003BF97C string=0x00000000003BF980 ")"
 *   insn=0x00000000003BF980 string=0x00000000003BF984 "u""
 *   insn=0x00000000003BF984 string=0x00000000003BF988 ""
 *   insn=0x00000000003BF99C string=0x00000000003BF9A0 "("
 *   insn=0x00000000003BF9A0 string=0x00000000003BF9A4 ""
 *   insn=0x00000000003BF9A4 string=0x00000000003BF9A8 "a"
 *   insn=0x00000000003BF9A8 string=0x00000000003BF9AC ""
 *   insn=0x00000000003BF9B4 string=0x00000000003BF9B8 "<"
 *   insn=0x00000000003BF9B8 string=0x00000000003BF9BC "h*@"
 *   insn=0x00000000003BF9C0 string=0x00000000003BF9D4 "h"
 *   insn=0x00000000003BF9C8 string=0x00000000003BF9CC ")"
 *   insn=0x00000000003BF9D4 string=0x00000000003BF9D8 ""
 *   insn=0x00000000003BF9D8 string=0x00000000003BF9DC "H"
 *   insn=0x00000000003BF9DC string=0x00000000003BF9E0 ")"
 *   insn=0x00000000003BF9E8 string=0x00000000003BF9EC ")"
 *   insn=0x00000000003BF9EC string=0x00000000003BF9F0 ""
 *   insn=0x00000000003BFA04 string=0x00000000003BFA08 "("
 *   insn=0x00000000003BFA08 string=0x00000000003BFA0C ""
 *   insn=0x00000000003BFA0C string=0x00000000003BFA10 "a"
 *   insn=0x00000000003BFA10 string=0x00000000003BFA14 ""
 *   insn=0x00000000003BFA1C string=0x00000000003BFA20 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapZone::SaveToProtobufMessage(Caver::MapZone *this, Caver::Proto::MapZone *a2)
{
  __int64 *v4; // x0
  __int64 *v5; // x0
  __int64 result; // x0
  int v7; // w8
  int v8; // w9
  __int64 *v9; // x0

  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 26) |= 1u;
  if ( v4 == &Caver::Proto::MapZone::_default_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  sub_56A6A8(v4);
  v5 = (__int64 *)*((_QWORD *)a2 + 3);
  *((_DWORD *)a2 + 26) |= 2u;
  if ( v5 == &Caver::Proto::MapZone::_default_title_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 3) = v5;
  }
  result = sub_56A6A8(v5);
  v7 = *((_DWORD *)this + 10);
  if ( v7 )
  {
    v8 = *((_DWORD *)a2 + 26);
    *((_DWORD *)a2 + 22) = v7;
    *((_DWORD *)a2 + 26) = v8 | 8;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 6) - 24LL) )
  {
    v9 = (__int64 *)*((_QWORD *)a2 + 12);
    *((_DWORD *)a2 + 26) |= 0x10u;
    if ( v9 == &Caver::Proto::MapZone::_default_music_ )
    {
      v9 = (__int64 *)operator new(8u);
      *v9 = (__int64)&byte_6FD2F8;
      *((_QWORD *)a2 + 12) = v9;
    }
    return sub_56A6A8(v9);
  }
  return result;
}

