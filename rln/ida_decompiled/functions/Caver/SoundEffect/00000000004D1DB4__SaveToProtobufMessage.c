/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1DB4
 * Mangled: _ZN5Caver11SoundEffect21SaveToProtobufMessageEPNS_5Proto11SoundEffectE
 * Demangled: Caver::SoundEffect::SaveToProtobufMessage(Caver::Proto::SoundEffect *)
 *
 * Callers: 1
 *   0x00000000001FFFF0  Caver::SoundEffect::SaveToProtobufMessage(Caver::Proto::SoundEffect *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 24
 *   insn=0x00000000004D1DCC string=0x00000000004D1DD0 "h*@"
 *   insn=0x00000000004D1DD0 string=0x00000000004D1DD4 "`\n@"
 *   insn=0x00000000004D1DD4 string=0x00000000004D1DD8 ")"
 *   insn=0x00000000004D1DDC string=0x00000000004D1DE0 ""
 *   insn=0x00000000004D1DE0 string=0x00000000004D1DE4 "h*"
 *   insn=0x00000000004D1DF4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D1DF8 string=0x00000000004D1DFC ""
 *   insn=0x00000000004D1DFC string=0x00000000004D1E00 "a"
 *   insn=0x00000000004D1E00 string=0x00000000004D1E04 ""
 *   insn=0x00000000004D1E04 string=0x00000000004D1E08 "`\n"
 *   insn=0x00000000004D1E0C string=0x00000000004D1E10 "&b"
 *   insn=0x00000000004D1E14 string=0x00000000004D1E18 "h*@"
 *   insn=0x00000000004D1E18 string=0x00000000004D1E1C "`"
 *   insn=0x00000000004D1E1C string=0x00000000004D1E20 ")uC"
 *   insn=0x00000000004D1E24 string=0x00000000004D1E28 ""
 *   insn=0x00000000004D1E28 string=0x00000000004D1E2C "h*"
 *   insn=0x00000000004D1E40 string=0x00000000004D1E44 ""
 *   insn=0x00000000004D1E44 string=0x00000000004D1E48 "a"
 *   insn=0x00000000004D1E48 string=0x00000000004D1E4C ""
 *   insn=0x00000000004D1E4C string=0x00000000004D1E50 "`"
 *   insn=0x00000000004D1E58 string=0x00000000004D1E5C "h*@"
 *   insn=0x00000000004D1E60 string=0x00000000004D1E64 ""
 *   insn=0x00000000004D1E64 string=0x00000000004D1E68 "h*"
 *   insn=0x00000000004D1E68 string=0x00000000004D1E6C "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffect::SaveToProtobufMessage(Caver::SoundEffect *this, Caver::Proto::SoundEffect *a2)
{
  __int64 *v4; // x0
  __int64 *v5; // x0
  __int64 result; // x0
  __int64 v7; // x9

  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 10) |= 1u;
  if ( v4 == &Caver::Proto::SoundEffect::_default_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  sub_56A6A8(v4);
  v5 = (__int64 *)*((_QWORD *)a2 + 3);
  *((_DWORD *)a2 + 10) |= 2u;
  if ( v5 == &Caver::Proto::SoundEffect::_default_resource_name_ )
  {
    v5 = (__int64 *)operator new(8u);
    *v5 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 3) = v5;
  }
  result = sub_56A6A8(v5);
  v7 = *((_QWORD *)this + 7);
  *((_DWORD *)a2 + 10) |= 0xCu;
  *((_QWORD *)a2 + 4) = v7;
  return result;
}

