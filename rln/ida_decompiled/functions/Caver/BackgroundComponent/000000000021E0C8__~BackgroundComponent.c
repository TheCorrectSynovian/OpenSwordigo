/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E0C8
 * Mangled: _ZN5Caver19BackgroundComponentD2Ev
 * Demangled: Caver::BackgroundComponent::~BackgroundComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021E228  Caver::BackgroundComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 33
 *   insn=0x000000000021E0D0 string=0x000000000021E0D4 "(&"
 *   insn=0x000000000021E0D4 string=0x000000000021E0D8 ""
 *   insn=0x000000000021E0DC string=0x000000000021E0E0 "tF@"
 *   insn=0x000000000021E0E0 string=0x000000000021E0E4 "\n"
 *   insn=0x000000000021E0E4 string=0x000000000021E0E8 "\tA"
 *   insn=0x000000000021E0E8 string=0x000000000021E0EC "@"
 *   insn=0x000000000021E0EC string=0x000000000021E0F0 ""
 *   insn=0x000000000021E0F4 string=0x000000000021E0F8 "i"
 *   insn=0x000000000021E0F8 string=0x000000000021E0FC "`"
 *   insn=0x000000000021E0FC string=0x000000000021E100 "4"
 *   insn=0x000000000021E104 string=0x000000000021E108 ""
 *   insn=0x000000000021E114 string=0x000000000021E118 "\t@"
 *   insn=0x000000000021E124 string=0x000000000021E128 ""
 *   insn=0x000000000021E134 string=0x000000000021E138 "@"
 *   insn=0x000000000021E150 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000021E164 string=0x000000000021E168 "y"
 *   insn=0x000000000021E174 string=0x000000000021E178 "(&"
 *   insn=0x000000000021E178 string=0x000000000021E17C ""
 *   insn=0x000000000021E180 string=0x000000000021E184 "tF@"
 *   insn=0x000000000021E184 string=0x000000000021E188 "\n"
 *   insn=0x000000000021E188 string=0x000000000021E18C "\tA"
 *   insn=0x000000000021E18C string=0x000000000021E190 "@"
 *   insn=0x000000000021E190 string=0x000000000021E194 ""
 *   insn=0x000000000021E198 string=0x000000000021E19C "i"
 *   insn=0x000000000021E19C string=0x000000000021E1A0 "`"
 *   insn=0x000000000021E1A0 string=0x000000000021E1A4 "4"
 *   insn=0x000000000021E1A8 string=0x000000000021E1AC ""
 *   insn=0x000000000021E1B8 string=0x000000000021E1BC "\t@"
 *   insn=0x000000000021E1C8 string=0x000000000021E1CC ""
 *   insn=0x000000000021E1D8 string=0x000000000021E1DC "@"
 *   insn=0x000000000021E1F8 string=0x000000000021E1FC "-d"
 *   insn=0x000000000021E1FC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021E218 string=0x000000000021E21C "%d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BackgroundComponent::~BackgroundComponent(Caver::BackgroundComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 17);
  *(_QWORD *)&v3 = &off_6B9BC0;
  *((_QWORD *)&v3 + 1) = &off_6B9C00;
  *(_QWORD *)this = off_6B9AA0;
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

