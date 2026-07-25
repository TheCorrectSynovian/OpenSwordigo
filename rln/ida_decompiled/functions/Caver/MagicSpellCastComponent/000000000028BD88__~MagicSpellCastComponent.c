/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BD88
 * Mangled: _ZN5Caver23MagicSpellCastComponentD2Ev
 * Demangled: Caver::MagicSpellCastComponent::~MagicSpellCastComponent()
 *
 * Callers: 1
 *   0x00000000001FEB00  Caver::MagicSpellCastComponent::~MagicSpellCastComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FEB00  Caver::MagicSpellCastComponent::~MagicSpellCastComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000028BEC0  Caver::MagicSpellCastComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x000000000028BD94 string=0x000000000028BD98 "-E"
 *   insn=0x000000000028BDA0 string=0x000000000028BDA4 "))E"
 *   insn=0x000000000028BDA4 string=0x000000000028BDA8 "`N@"
 *   insn=0x000000000028BDA8 string=0x000000000028BDAC ""
 *   insn=0x000000000028BDAC string=0x000000000028BDB0 "\nA"
 *   insn=0x000000000028BDB0 string=0x000000000028BDB4 ""
 *   insn=0x000000000028BDB4 string=0x000000000028BDB8 "`"
 *   insn=0x000000000028BDB8 string=0x000000000028BDBC ")A"
 *   insn=0x000000000028BDC0 string=0x000000000028BDC4 "j"
 *   insn=0x000000000028BDC4 string=0x000000000028BDC8 "`"
 *   insn=0x000000000028BDC8 string=0x000000000028BDCC "iF"
 *   insn=0x000000000028BDD0 string=0x000000000028BDD4 "@"
 *   insn=0x000000000028BDD4 string=0x000000000028BDD8 ""
 *   insn=0x000000000028BDD8 string=0x000000000028BDDC ""
 *   insn=0x000000000028BDE0 string=0x000000000028BDE4 ""
 *   insn=0x000000000028BDE4 string=0x000000000028BDE8 ""
 *   insn=0x000000000028BDF0 string=0x000000000028BDF4 "`B@"
 *   insn=0x000000000028BDF4 string=0x000000000028BDF8 "mB"
 *   insn=0x000000000028BDF8 string=0x000000000028BDFC "A"
 *   insn=0x000000000028BDFC string=0x000000000028BE00 "h:"
 *   insn=0x000000000028BE04 string=0x000000000028BE08 "@"
 *   insn=0x000000000028BE08 string=0x000000000028BE0C ""
 *   insn=0x000000000028BE0C string=0x000000000028BE10 ""
 *   insn=0x000000000028BE14 string=0x000000000028BE18 ""
 *   insn=0x000000000028BE18 string=0x000000000028BE1C ""
 *   insn=0x000000000028BE30 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000028BE40 string=0x000000000028BE44 "`B@"
 *   insn=0x000000000028BE44 string=0x000000000028BE48 "mB"
 *   insn=0x000000000028BE48 string=0x000000000028BE4C "A"
 *   insn=0x000000000028BE4C string=0x000000000028BE50 "h:"
 *   insn=0x000000000028BE54 string=0x000000000028BE58 "@"
 *   insn=0x000000000028BE58 string=0x000000000028BE5C ""
 *   insn=0x000000000028BE5C string=0x000000000028BE60 ""
 *   insn=0x000000000028BE64 string=0x000000000028BE68 ""
 *   insn=0x000000000028BE68 string=0x000000000028BE6C ""
 *   insn=0x000000000028BE80 string=0x000000000028BE84 "2\t"
 *   insn=0x000000000028BEA8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicSpellCastComponent::~MagicSpellCastComponent(Caver::MagicSpellCastComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 19);
  *(_QWORD *)&v3 = &off_6C0C68;
  *((_QWORD *)&v3 + 1) = &off_6C0CA8;
  *(_QWORD *)this = off_6C0B50;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 17) = off_6BE248;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = off_6C0268;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Caver::Component::~Component(this);
}

