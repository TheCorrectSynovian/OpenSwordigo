/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1D64
 * Mangled: _ZN5Caver11SoundEffect23LoadFromProtobufMessageERKNS_5Proto11SoundEffectE
 * Demangled: Caver::SoundEffect::LoadFromProtobufMessage(Caver::Proto::SoundEffect const&)
 *
 * Callers: 2
 *   0x0000000000203120  Caver::SoundEffect::LoadFromProtobufMessage(Caver::Proto::SoundEffect const&)
 *   0x00000000004D19D0  Caver::SoundEffect::~SoundEffect()
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 8
 *   insn=0x00000000004D1D70 string=0x00000000004D1D74 "a\n@"
 *   insn=0x00000000004D1D7C string=0x00000000004D1D80 "Jb"
 *   insn=0x00000000004D1D80 string=0x00000000004D1D84 "a"
 *   insn=0x00000000004D1D88 string=0x00000000004D1D8C "Gb"
 *   insn=0x00000000004D1D8C string=0x00000000004D1D90 "h"@"
 *   insn=0x00000000004D1D94 string=0x00000000004D1D98 "h"
 *   insn=0x00000000004D1D98 string=0x00000000004D1D9C "h"
 *   insn=0x00000000004D1D9C string=0x00000000004D1DA0 "h&@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffect::LoadFromProtobufMessage(
        Caver::SoundEffect *this,
        const Caver::Proto::SoundEffect *a2)
{
  __int64 result; // x0

  sub_56A6A8((char *)this + 24);
  result = sub_56A6A8((char *)this + 32);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 8);
  if ( (*((_BYTE *)a2 + 40) & 8) != 0 )
    *((_DWORD *)this + 15) = *((_DWORD *)a2 + 9);
  return result;
}

