/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7AB0
 * Mangled: _ZN5Caver5Proto11SoundEffect5ClearEv
 * Demangled: Caver::Proto::SoundEffect::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 14
 *   insn=0x00000000002D7ABC string=0x00000000002D7AC0 "h"
 *   insn=0x00000000002D7AC0 string=0x00000000002D7AC4 "h"
 *   insn=0x00000000002D7AC8 string=0x00000000002D7AF8 "h"
 *   insn=0x00000000002D7ACC string=0x00000000002D7AD0 "`\n@"
 *   insn=0x00000000002D7AD0 string=0x00000000002D7AD4 ")"
 *   insn=0x00000000002D7ADC string=0x00000000002D7AE0 ""
 *   insn=0x00000000002D7AEC string=0x00000000002D7AF0 "rD\n"
 *   insn=0x00000000002D7AF0 string=0x00000000002D7AF4 "h*@"
 *   insn=0x00000000002D7AF8 string=0x00000000002D7AFC "h "
 *   insn=0x00000000002D7AFC string=0x00000000002D7B00 "`"
 *   insn=0x00000000002D7B00 string=0x00000000002D7B04 "uC"
 *   insn=0x00000000002D7B0C string=0x00000000002D7B10 ""
 *   insn=0x00000000002D7B1C string=0x00000000002D7B20 "fD\n"
 *   insn=0x00000000002D7B28 string=0x00000000002D7B2C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SoundEffect::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 40);
  if ( (_BYTE)v2 )
  {
    if ( (*(_BYTE *)(this + 40) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( (__int64 *)this != &Caver::Proto::SoundEffect::_default_name_ )
      {
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
        v2 = *(_DWORD *)(v1 + 40);
      }
    }
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( (__int64 *)this != &Caver::Proto::SoundEffect::_default_resource_name_ )
        this = sub_568CB8(this, 0, *(_QWORD *)(*(_QWORD *)this - 24LL), 0);
    }
    *(_QWORD *)(v1 + 32) = 0x3DCCCCCD3F800000LL;
  }
  *(_DWORD *)(v1 + 40) = 0;
  return this;
}

