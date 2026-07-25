/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000228710
 * Mangled: _ZN5Caver33ModelTransformControllerComponentD2Ev
 * Demangled: Caver::ModelTransformControllerComponent::~ModelTransformControllerComponent()
 *
 * Callers: 1
 *   0x00000000002283D8  sub_2283D8
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000228848  Caver::ModelTransformControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x000000000022871C string=0x0000000000228720 ""
 *   insn=0x0000000000228728 string=0x000000000022872C ")i@"
 *   insn=0x000000000022872C string=0x0000000000228730 "`B@"
 *   insn=0x0000000000228730 string=0x0000000000228734 ""
 *   insn=0x0000000000228734 string=0x0000000000228738 "\nA"
 *   insn=0x0000000000228738 string=0x000000000022873C ""
 *   insn=0x000000000022873C string=0x0000000000228740 "`"
 *   insn=0x0000000000228740 string=0x0000000000228744 ")A"
 *   insn=0x0000000000228748 string=0x000000000022874C "j"
 *   insn=0x000000000022874C string=0x0000000000228750 "`"
 *   insn=0x0000000000228750 string=0x0000000000228754 "i:"
 *   insn=0x0000000000228758 string=0x000000000022875C "@"
 *   insn=0x000000000022875C string=0x0000000000228760 ""
 *   insn=0x0000000000228760 string=0x0000000000228764 ""
 *   insn=0x0000000000228768 string=0x000000000022876C ""
 *   insn=0x000000000022876C string=0x0000000000228770 ""
 *   insn=0x0000000000228780 string=0x0000000000228784 "SG"
 *   insn=0x0000000000228784 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000022878C string=0x0000000000228790 "PG"
 *   insn=0x0000000000228794 string=0x0000000000228798 "Kd"
 *   insn=0x00000000002287AC string=0x00000000002287B0 ""
 *   insn=0x00000000002287B8 string=0x00000000002287BC ")i@"
 *   insn=0x00000000002287BC string=0x00000000002287C0 "`B@"
 *   insn=0x00000000002287C0 string=0x00000000002287C4 ""
 *   insn=0x00000000002287C4 string=0x00000000002287C8 "\nA"
 *   insn=0x00000000002287C8 string=0x00000000002287CC ""
 *   insn=0x00000000002287CC string=0x00000000002287D0 "`"
 *   insn=0x00000000002287D0 string=0x00000000002287D4 ")A"
 *   insn=0x00000000002287D8 string=0x00000000002287DC "j"
 *   insn=0x00000000002287DC string=0x00000000002287E0 "`"
 *   insn=0x00000000002287E0 string=0x00000000002287E4 "i:"
 *   insn=0x00000000002287E8 string=0x00000000002287EC "@"
 *   insn=0x00000000002287EC string=0x00000000002287F0 ""
 *   insn=0x00000000002287F0 string=0x00000000002287F4 ""
 *   insn=0x00000000002287F8 string=0x00000000002287FC ""
 *   insn=0x00000000002287FC string=0x0000000000228800 ""
 *   insn=0x0000000000228808 string=0x000000000022880C "1G"
 *   insn=0x000000000022881C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000228824 string=0x0000000000228828 "*G"
 *   insn=0x0000000000228840 string=0x0000000000228844 " d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelTransformControllerComponent::~ModelTransformControllerComponent(
        Caver::ModelTransformControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 16);
  *(_QWORD *)&v3 = &off_6BA4E8;
  *((_QWORD *)&v3 + 1) = &off_6BA528;
  *(_QWORD *)this = off_6BA3D0;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 14) = off_6B9438;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Caver::Component::~Component(this);
}

