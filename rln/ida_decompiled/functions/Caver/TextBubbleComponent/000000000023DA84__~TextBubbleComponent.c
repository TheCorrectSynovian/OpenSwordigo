/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023DA84
 * Mangled: _ZN5Caver19TextBubbleComponentD2Ev
 * Demangled: Caver::TextBubbleComponent::~TextBubbleComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000023DBE4  Caver::TextBubbleComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x000000000023DA8C string=0x000000000023DA90 "H%"
 *   insn=0x000000000023DA90 string=0x000000000023DA94 ""
 *   insn=0x000000000023DA98 string=0x000000000023DA9C "tB@"
 *   insn=0x000000000023DA9C string=0x000000000023DAA0 "\n"
 *   insn=0x000000000023DAA0 string=0x000000000023DAA4 "\tA"
 *   insn=0x000000000023DAA4 string=0x000000000023DAA8 "@"
 *   insn=0x000000000023DAA8 string=0x000000000023DAAC ""
 *   insn=0x000000000023DAB0 string=0x000000000023DAB4 "i"
 *   insn=0x000000000023DAB4 string=0x000000000023DAB8 "`"
 *   insn=0x000000000023DAB8 string=0x000000000023DABC "4"
 *   insn=0x000000000023DAC0 string=0x000000000023DAC4 ""
 *   insn=0x000000000023DAD0 string=0x000000000023DAD4 "\t@"
 *   insn=0x000000000023DAE0 string=0x000000000023DAE4 ""
 *   insn=0x000000000023DAF0 string=0x000000000023DAF4 "@"
 *   insn=0x000000000023DB08 string=0x000000000023DB0C "q"
 *   insn=0x000000000023DB0C string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000023DB14 string=0x000000000023DB18 "n"
 *   insn=0x000000000023DB1C string=0x000000000023DB20 "i"
 *   insn=0x000000000023DB20 string=0x000000000023DB24 "\nB"
 *   insn=0x000000000023DB30 string=0x000000000023DB34 "H%"
 *   insn=0x000000000023DB34 string=0x000000000023DB38 ""
 *   insn=0x000000000023DB3C string=0x000000000023DB40 "tB@"
 *   insn=0x000000000023DB40 string=0x000000000023DB44 "\n"
 *   insn=0x000000000023DB44 string=0x000000000023DB48 "\tA"
 *   insn=0x000000000023DB48 string=0x000000000023DB4C "@"
 *   insn=0x000000000023DB4C string=0x000000000023DB50 ""
 *   insn=0x000000000023DB54 string=0x000000000023DB58 "i"
 *   insn=0x000000000023DB58 string=0x000000000023DB5C "`"
 *   insn=0x000000000023DB5C string=0x000000000023DB60 "4"
 *   insn=0x000000000023DB64 string=0x000000000023DB68 ""
 *   insn=0x000000000023DB74 string=0x000000000023DB78 "\t@"
 *   insn=0x000000000023DB84 string=0x000000000023DB88 ""
 *   insn=0x000000000023DB94 string=0x000000000023DB98 "@"
 *   insn=0x000000000023DBA4 string=0x000000000023DBA8 "J"
 *   insn=0x000000000023DBB8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000023DBC0 string=0x000000000023DBC4 "C"
 *   insn=0x000000000023DBDC string=0x000000000023DBE0 "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TextBubbleComponent::~TextBubbleComponent(Caver::TextBubbleComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 16);
  *(_QWORD *)&v3 = &off_6BBE10;
  *((_QWORD *)&v3 + 1) = &off_6BBE50;
  *(_QWORD *)this = off_6BBCF0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[1] - 1LL;
    v2[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v5 = v2[2] - 1LL;
      v2[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  Caver::Component::~Component(this);
}

