/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1E80
 * Mangled: _ZN5Caver11SoundEffect10LoadBufferEv
 * Demangled: Caver::SoundEffect::LoadBuffer(void)
 *
 * Callers: 1
 *   0x0000000000203390  Caver::SoundEffect::LoadBuffer(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD0C0  Caver::SoundLibrary::sharedLibrary(void)
 *   0x00000000001FE500  Caver::SoundLibrary::BufferForResourceWithName(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x00000000004D1E90 string=0x00000000004D1E94 "U"
 *   insn=0x00000000004D1EA4 string=0x00000000001FD0C0 "0'"
 *   insn=0x00000000004D1EA8 string=0x00000000004D1EAC "\tB"
 *   insn=0x00000000004D1EAC string=0x00000000004D1EB0 ")"
 *   insn=0x00000000004D1EB0 string=0x00000000004D1EB4 "\n!"
 *   insn=0x00000000004D1EB4 string=0x00000000004D1EB8 "?"
 *   insn=0x00000000004D1EB8 string=0x00000000004D1EBC "A"
 *   insn=0x00000000004D1ECC string=0x00000000004D1ED0 "\n"
 *   insn=0x00000000004D1ECC string=0x00000000004D1EDC "t"
 *   insn=0x00000000004D1ED0 string=0x00000000004D1ED4 "J"
 *   insn=0x00000000004D1ED4 string=0x00000000004D1ED8 "\n"
 *   insn=0x00000000004D1EDC string=0x00000000004D1EE0 "i"
 *   insn=0x00000000004D1EE0 string=0x00000000004D1EE4 "4"
 *   insn=0x00000000004D1EE8 string=0x00000000004D1EEC ""
 *   insn=0x00000000004D1EF8 string=0x00000000004D1EFC "\t@"
 *   insn=0x00000000004D1F08 string=0x00000000004D1F0C ""
 *   insn=0x00000000004D1F18 string=0x00000000004D1F1C "@"
 *   insn=0x00000000004D1F28 string=0x00000000004D1F2C "3"
 *   insn=0x00000000004D1F2C string=0x00000000004D1F30 "h"
 *   insn=0x00000000004D1F30 string=0x00000000004D1F34 ""
 *   insn=0x00000000004D1F34 string=0x00000000004D1F38 "h"
 *   insn=0x00000000004D1F3C string=0x00000000004D1F40 "h"
 *   insn=0x00000000004D1F44 string=0x00000000004D1F48 "\t@"
 *   insn=0x00000000004D1F4C string=0x00000000004D1F50 "h\n@"
 *   insn=0x00000000004D1F50 string=0x00000000004D1F54 ""
 *   insn=0x00000000004D1F54 string=0x00000000004D1F58 "h\n"
 *   insn=0x00000000004D1F5C string=0x00000000004D1F60 "h"
 *   insn=0x00000000004D1F64 string=0x00000000004D1F68 "@"
 *   insn=0x00000000004D1F94 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D1F9C string=0x00000000004D1FA0 "4"
 *   insn=0x00000000004D1FA4 string=0x00000000004D1FA8 ""
 *   insn=0x00000000004D1FB4 string=0x00000000004D1FB8 "\t@"
 *   insn=0x00000000004D1FC4 string=0x00000000004D1FC8 ""
 *   insn=0x00000000004D1FD4 string=0x00000000004D1FD8 "@"
 *   insn=0x00000000004D1FE4 string=0x00000000004D1FE8 "7"
 *   insn=0x00000000004D1FF8 string=0x00000000004D1FFC ""
 *   insn=0x00000000004D1FFC string=0x00000000004D2000 ""
 *   insn=0x00000000004D200C string=0x00000000004D2010 "h"
 *   insn=0x00000000004D2010 string=0x00000000004D2014 ""
 *   insn=0x00000000004D2014 string=0x00000000004D2018 "h"
 *   insn=0x00000000004D2018 string=0x00000000004D201C "!"
 *   insn=0x00000000004D201C string=0x00000000004D2020 "h"
 *   insn=0x00000000004D2024 string=0x00000000004D2028 "\t@"
 *   insn=0x00000000004D202C string=0x00000000004D2030 "h\n@"
 *   insn=0x00000000004D2030 string=0x00000000004D2034 ""
 *   insn=0x00000000004D2034 string=0x00000000004D2038 "h\n"
 *   insn=0x00000000004D203C string=0x00000000004D204C "h"
 *   insn=0x00000000004D205C string=0x00000000004D2060 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundEffect::LoadBuffer(Caver::SoundEffect *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // [xsp+28h] [xbp-38h]
  _QWORD *v8; // [xsp+30h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::SoundLibrary::sharedLibrary(this);
  Caver::SoundLibrary::BufferForResourceWithName();
  if ( v8 )
    ++v8[1];
  v2 = (_QWORD *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 5) = v7;
  *((_QWORD *)this + 6) = v8;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  if ( v8 )
  {
    v5 = v8[1] - 1LL;
    v8[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)())(*v8 + 16LL))();
      v6 = v8[2] - 1LL;
      v8[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)())(*v8 + 24LL))();
    }
  }
}

