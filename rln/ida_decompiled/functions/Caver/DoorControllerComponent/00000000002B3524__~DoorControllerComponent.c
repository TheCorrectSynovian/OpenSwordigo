/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B3524
 * Mangled: _ZN5Caver23DoorControllerComponentD2Ev
 * Demangled: Caver::DoorControllerComponent::~DoorControllerComponent()
 *
 * Callers: 1
 *   0x00000000001FE480  Caver::DoorControllerComponent::~DoorControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FE480  Caver::DoorControllerComponent::~DoorControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002B3734  Caver::DoorControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 72
 *   insn=0x00000000002B3534 string=0x00000000002B3538 "AF"
 *   insn=0x00000000002B3544 string=0x00000000002B3548 "`f@"
 *   insn=0x00000000002B3548 string=0x00000000002B354C "\n"
 *   insn=0x00000000002B354C string=0x00000000002B3550 "\tA"
 *   insn=0x00000000002B3550 string=0x00000000002B3554 ""
 *   insn=0x00000000002B3554 string=0x00000000002B3558 "@"
 *   insn=0x00000000002B3560 string=0x00000000002B3564 "i"
 *   insn=0x00000000002B3564 string=0x00000000002B3568 "`"
 *   insn=0x00000000002B3568 string=0x00000000002B356C "u^"
 *   insn=0x00000000002B3570 string=0x00000000002B3574 "@"
 *   insn=0x00000000002B3570 string=0x00000000002B3590 "`Z@"
 *   insn=0x00000000002B3574 string=0x00000000002B3578 ""
 *   insn=0x00000000002B3578 string=0x00000000002B357C ""
 *   insn=0x00000000002B3580 string=0x00000000002B3584 ""
 *   insn=0x00000000002B3584 string=0x00000000002B3588 ""
 *   insn=0x00000000002B3590 string=0x00000000002B3594 "uR"
 *   insn=0x00000000002B3598 string=0x00000000002B359C "@"
 *   insn=0x00000000002B359C string=0x00000000002B35A0 ""
 *   insn=0x00000000002B35A0 string=0x00000000002B35A4 ""
 *   insn=0x00000000002B35A8 string=0x00000000002B35AC ""
 *   insn=0x00000000002B35AC string=0x00000000002B35B0 ""
 *   insn=0x00000000002B35B8 string=0x00000000002B35BC "`N@"
 *   insn=0x00000000002B35BC string=0x00000000002B35C0 ""
 *   insn=0x00000000002B35C0 string=0x00000000002B35C4 "A"
 *   insn=0x00000000002B35C4 string=0x00000000002B35C8 "hF"
 *   insn=0x00000000002B35CC string=0x00000000002B35D0 "@"
 *   insn=0x00000000002B35D0 string=0x00000000002B35D4 ""
 *   insn=0x00000000002B35D4 string=0x00000000002B35D8 ""
 *   insn=0x00000000002B35DC string=0x00000000002B35E0 ""
 *   insn=0x00000000002B35E0 string=0x00000000002B35E4 ""
 *   insn=0x00000000002B35EC string=0x00000000002B35F0 "`B@"
 *   insn=0x00000000002B35F0 string=0x00000000002B35F4 ""
 *   insn=0x00000000002B35F4 string=0x00000000002B35F8 "A"
 *   insn=0x00000000002B35F8 string=0x00000000002B35FC "h:"
 *   insn=0x00000000002B3600 string=0x00000000002B3604 "@"
 *   insn=0x00000000002B3604 string=0x00000000002B3608 ""
 *   insn=0x00000000002B3608 string=0x00000000002B360C ""
 *   insn=0x00000000002B3610 string=0x00000000002B3614 ""
 *   insn=0x00000000002B3614 string=0x00000000002B3618 ""
 *   insn=0x00000000002B3630 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002B3634 string=0x00000000002B3638 ","
 *   insn=0x00000000002B3650 string=0x00000000002B3654 "`Z@"
 *   insn=0x00000000002B3654 string=0x00000000002B3658 "A"
 *   insn=0x00000000002B3658 string=0x00000000002B365C "hR"
 *   insn=0x00000000002B3660 string=0x00000000002B3664 "@"
 *   insn=0x00000000002B3664 string=0x00000000002B3668 ""
 *   insn=0x00000000002B3668 string=0x00000000002B366C ""
 *   insn=0x00000000002B3670 string=0x00000000002B3674 ""
 *   insn=0x00000000002B3674 string=0x00000000002B3678 ""
 *   insn=0x00000000002B3680 string=0x00000000002B3684 "`N@"
 *   insn=0x00000000002B3684 string=0x00000000002B3688 ""
 *   insn=0x00000000002B3688 string=0x00000000002B368C "A"
 *   insn=0x00000000002B368C string=0x00000000002B3690 "hF"
 *   insn=0x00000000002B3694 string=0x00000000002B3698 "@"
 *   insn=0x00000000002B3698 string=0x00000000002B369C ""
 *   insn=0x00000000002B369C string=0x00000000002B36A0 ""
 *   insn=0x00000000002B36A4 string=0x00000000002B36A8 ""
 *   insn=0x00000000002B36A8 string=0x00000000002B36AC ""
 *   insn=0x00000000002B36B4 string=0x00000000002B36B8 "`B@"
 *   insn=0x00000000002B36B8 string=0x00000000002B36BC ""
 *   insn=0x00000000002B36BC string=0x00000000002B36C0 "A"
 *   insn=0x00000000002B36C0 string=0x00000000002B36C4 "h:"
 *   insn=0x00000000002B36C8 string=0x00000000002B36CC "@"
 *   insn=0x00000000002B36CC string=0x00000000002B36D0 ""
 *   insn=0x00000000002B36D0 string=0x00000000002B36D4 ""
 *   insn=0x00000000002B36D8 string=0x00000000002B36DC ""
 *   insn=0x00000000002B36DC string=0x00000000002B36E0 ""
 *   insn=0x00000000002B36E8 string=0x00000000002B36EC "y"
 *   insn=0x00000000002B36F0 string=0x00000000002B36F4 "t8"
 *   insn=0x00000000002B3708 string=0x00000000002B370C "]+"
 *   insn=0x00000000002B371C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B372C string=0x00000000002B3730 "e8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DoorControllerComponent::~DoorControllerComponent(Caver::DoorControllerComponent *this)
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
  *(_QWORD *)&v3 = &off_6C4388;
  *((_QWORD *)&v3 + 1) = &off_6C43C8;
  *(_QWORD *)this = off_6C4270;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 23) = off_6BE248;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 20) = off_6BE248;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 17) = &off_6BDF68;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = off_6BEE48;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  Caver::Component::~Component(this);
}

