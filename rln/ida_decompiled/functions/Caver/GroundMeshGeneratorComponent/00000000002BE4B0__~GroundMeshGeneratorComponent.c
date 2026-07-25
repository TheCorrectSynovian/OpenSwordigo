/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE4B0
 * Mangled: _ZN5Caver28GroundMeshGeneratorComponentD2Ev
 * Demangled: Caver::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent()
 *
 * Callers: 1
 *   0x00000000001FAAF0  Caver::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FAAF0  Caver::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002BE6C0  Caver::GroundMeshGeneratorComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 76
 *   insn=0x00000000002BE4BC string=0x00000000002BE4C0 "H!"
 *   insn=0x00000000002BE4C0 string=0x00000000002BE4C4 ""
 *   insn=0x00000000002BE4C4 string=0x00000000002BE4C8 "4!"
 *   insn=0x00000000002BE4D0 string=0x00000000002BE4D4 "`f@"
 *   insn=0x00000000002BE4D4 string=0x00000000002BE4D8 "\n"
 *   insn=0x00000000002BE4D8 string=0x00000000002BE4DC "\tA"
 *   insn=0x00000000002BE4DC string=0x00000000002BE4E0 ""
 *   insn=0x00000000002BE4E0 string=0x00000000002BE4E4 "@"
 *   insn=0x00000000002BE4EC string=0x00000000002BE4F0 "i"
 *   insn=0x00000000002BE4F0 string=0x00000000002BE4F4 "`"
 *   insn=0x00000000002BE4F4 string=0x00000000002BE4F8 "u^"
 *   insn=0x00000000002BE4FC string=0x00000000002BE500 "@"
 *   insn=0x00000000002BE4FC string=0x00000000002BE51C "`Z@"
 *   insn=0x00000000002BE500 string=0x00000000002BE504 ""
 *   insn=0x00000000002BE504 string=0x00000000002BE508 ""
 *   insn=0x00000000002BE50C string=0x00000000002BE510 ""
 *   insn=0x00000000002BE510 string=0x00000000002BE514 ""
 *   insn=0x00000000002BE51C string=0x00000000002BE520 "uR"
 *   insn=0x00000000002BE524 string=0x00000000002BE528 "@"
 *   insn=0x00000000002BE524 string=0x00000000002BE544 "H!"
 *   insn=0x00000000002BE528 string=0x00000000002BE52C ""
 *   insn=0x00000000002BE52C string=0x00000000002BE530 ""
 *   insn=0x00000000002BE534 string=0x00000000002BE538 ""
 *   insn=0x00000000002BE538 string=0x00000000002BE53C ""
 *   insn=0x00000000002BE544 string=0x00000000002BE548 "`N@"
 *   insn=0x00000000002BE548 string=0x00000000002BE54C ""
 *   insn=0x00000000002BE54C string=0x00000000002BE550 "A"
 *   insn=0x00000000002BE550 string=0x00000000002BE554 "hF"
 *   insn=0x00000000002BE558 string=0x00000000002BE55C "@"
 *   insn=0x00000000002BE558 string=0x00000000002BE578 "(!"
 *   insn=0x00000000002BE55C string=0x00000000002BE560 ""
 *   insn=0x00000000002BE560 string=0x00000000002BE564 ""
 *   insn=0x00000000002BE568 string=0x00000000002BE56C ""
 *   insn=0x00000000002BE56C string=0x00000000002BE570 ""
 *   insn=0x00000000002BE578 string=0x00000000002BE57C "`B@"
 *   insn=0x00000000002BE57C string=0x00000000002BE580 ""
 *   insn=0x00000000002BE580 string=0x00000000002BE584 "A"
 *   insn=0x00000000002BE584 string=0x00000000002BE588 "h:"
 *   insn=0x00000000002BE58C string=0x00000000002BE590 "@"
 *   insn=0x00000000002BE590 string=0x00000000002BE594 ""
 *   insn=0x00000000002BE594 string=0x00000000002BE598 ""
 *   insn=0x00000000002BE59C string=0x00000000002BE5A0 ""
 *   insn=0x00000000002BE5A0 string=0x00000000002BE5A4 ""
 *   insn=0x00000000002BE5BC string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002BE5C0 string=0x00000000002BE5C4 ","
 *   insn=0x00000000002BE5CC string=0x00000000002BE640 "(!"
 *   insn=0x00000000002BE5D4 string=0x00000000002BE60C "H!"
 *   insn=0x00000000002BE5DC string=0x00000000002BE5E0 "`Z@"
 *   insn=0x00000000002BE5E0 string=0x00000000002BE5E4 "A"
 *   insn=0x00000000002BE5E4 string=0x00000000002BE5E8 "hR"
 *   insn=0x00000000002BE5EC string=0x00000000002BE5F0 "@"
 *   insn=0x00000000002BE5F0 string=0x00000000002BE5F4 ""
 *   insn=0x00000000002BE5F4 string=0x00000000002BE5F8 ""
 *   insn=0x00000000002BE5FC string=0x00000000002BE600 ""
 *   insn=0x00000000002BE600 string=0x00000000002BE604 ""
 *   insn=0x00000000002BE60C string=0x00000000002BE610 "`N@"
 *   insn=0x00000000002BE610 string=0x00000000002BE614 ""
 *   insn=0x00000000002BE614 string=0x00000000002BE618 "A"
 *   insn=0x00000000002BE618 string=0x00000000002BE61C "hF"
 *   insn=0x00000000002BE620 string=0x00000000002BE624 "@"
 *   insn=0x00000000002BE624 string=0x00000000002BE628 ""
 *   insn=0x00000000002BE628 string=0x00000000002BE62C ""
 *   insn=0x00000000002BE630 string=0x00000000002BE634 ""
 *   insn=0x00000000002BE634 string=0x00000000002BE638 ""
 *   insn=0x00000000002BE640 string=0x00000000002BE644 "`B@"
 *   insn=0x00000000002BE644 string=0x00000000002BE648 ""
 *   insn=0x00000000002BE648 string=0x00000000002BE64C "A"
 *   insn=0x00000000002BE64C string=0x00000000002BE650 "h:"
 *   insn=0x00000000002BE654 string=0x00000000002BE658 "@"
 *   insn=0x00000000002BE658 string=0x00000000002BE65C ""
 *   insn=0x00000000002BE65C string=0x00000000002BE660 ""
 *   insn=0x00000000002BE664 string=0x00000000002BE668 ""
 *   insn=0x00000000002BE668 string=0x00000000002BE66C ""
 *   insn=0x00000000002BE680 string=0x00000000002BE684 "2?"
 *   insn=0x00000000002BE698 string=0x00000000001FAAF0 "0'"
 *   insn=0x00000000002BE6A8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshGeneratorComponent::~GroundMeshGeneratorComponent(
        Caver::GroundMeshGeneratorComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 25);
  *(_QWORD *)&v3 = &off_6C4CA8;
  *((_QWORD *)&v3 + 1) = &off_6C4CE8;
  *(_QWORD *)this = off_6C4B90;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 23) = off_6C3CD8;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 20) = off_6C3CD8;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 17) = &off_6C4D28;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = off_6C3D28;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  Caver::Component::~Component(this);
}

