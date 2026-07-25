/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A1760
 * Mangled: _ZN5Caver33WalkingMonsterControllerComponentD2Ev
 * Demangled: Caver::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002A1898  Caver::WalkingMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 42
 *   insn=0x00000000002A1768 string=0x00000000002A176C "(""
 *   insn=0x00000000002A176C string=0x00000000002A1770 ""
 *   insn=0x00000000002A1770 string=0x00000000002A1774 ")""
 *   insn=0x00000000002A1778 string=0x00000000002A177C ")"
 *   insn=0x00000000002A177C string=0x00000000002A1780 "`r@"
 *   insn=0x00000000002A1780 string=0x00000000002A1784 ""
 *   insn=0x00000000002A1784 string=0x00000000002A1788 "\nA"
 *   insn=0x00000000002A1788 string=0x00000000002A178C ""
 *   insn=0x00000000002A178C string=0x00000000002A1790 "`"
 *   insn=0x00000000002A1790 string=0x00000000002A1794 ")A"
 *   insn=0x00000000002A1798 string=0x00000000002A179C "j"
 *   insn=0x00000000002A179C string=0x00000000002A17A0 "`"
 *   insn=0x00000000002A17A0 string=0x00000000002A17A4 "ij"
 *   insn=0x00000000002A17A8 string=0x00000000002A17AC "@"
 *   insn=0x00000000002A17AC string=0x00000000002A17B0 ""
 *   insn=0x00000000002A17B0 string=0x00000000002A17B4 ""
 *   insn=0x00000000002A17B8 string=0x00000000002A17BC ""
 *   insn=0x00000000002A17BC string=0x00000000002A17C0 ""
 *   insn=0x00000000002A17D0 string=0x00000000002A17D4 "K"
 *   insn=0x00000000002A17DC string=0x00000000002A17E0 "H"
 *   insn=0x00000000002A17E4 string=0x00000000002A17E8 "7"
 *   insn=0x00000000002A17F8 string=0x00000000002A17FC "(""
 *   insn=0x00000000002A17FC string=0x00000000002A1800 ""
 *   insn=0x00000000002A1800 string=0x00000000002A1804 ")""
 *   insn=0x00000000002A1808 string=0x00000000002A180C ")"
 *   insn=0x00000000002A180C string=0x00000000002A1810 "`r@"
 *   insn=0x00000000002A1810 string=0x00000000002A1814 ""
 *   insn=0x00000000002A1814 string=0x00000000002A1818 "\nA"
 *   insn=0x00000000002A1818 string=0x00000000002A181C ""
 *   insn=0x00000000002A181C string=0x00000000002A1820 "`"
 *   insn=0x00000000002A1820 string=0x00000000002A1824 ")A"
 *   insn=0x00000000002A1828 string=0x00000000002A182C "j"
 *   insn=0x00000000002A182C string=0x00000000002A1830 "`"
 *   insn=0x00000000002A1830 string=0x00000000002A1834 "ij"
 *   insn=0x00000000002A1838 string=0x00000000002A183C "@"
 *   insn=0x00000000002A183C string=0x00000000002A1840 ""
 *   insn=0x00000000002A1840 string=0x00000000002A1844 ""
 *   insn=0x00000000002A1848 string=0x00000000002A184C ""
 *   insn=0x00000000002A184C string=0x00000000002A1850 ""
 *   insn=0x00000000002A1858 string=0x00000000002A185C ")"
 *   insn=0x00000000002A186C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002A1874 string=0x00000000002A1878 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WalkingMonsterControllerComponent::~WalkingMonsterControllerComponent(
        Caver::WalkingMonsterControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 28);
  *(_QWORD *)&v3 = &off_6C2C48;
  *((_QWORD *)&v3 + 1) = &off_6C2C88;
  *(_QWORD *)this = off_6C2B30;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 26) = &off_6BDF68;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
}

