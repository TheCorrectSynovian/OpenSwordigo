/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000226A04
 * Mangled: _ZN5Caver33ModelTransformControllerComponentC2Ev
 * Demangled: Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001F7A50  Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(void)
 *   0x00000000001FCC00  Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 63
 *   insn=0x0000000000226A18 string=0x0000000000226A1C "&"
 *   insn=0x0000000000226A1C string=0x0000000000226A20 "U"
 *   insn=0x0000000000226A20 string=0x0000000000226A24 ""
 *   insn=0x0000000000226A30 string=0x0000000000226A34 "\n"
 *   insn=0x0000000000226A38 string=0x0000000000226A3C "@"
 *   insn=0x0000000000226A3C string=0x0000000000226A40 "\n"
 *   insn=0x0000000000226A40 string=0x0000000000226A44 "@"
 *   insn=0x0000000000226A50 string=0x0000000000226A54 "i"
 *   insn=0x0000000000226A60 string=0x0000000000226A64 "_"
 *   insn=0x0000000000226A64 string=0x0000000000226A68 "`"
 *   insn=0x0000000000226A74 string=0x0000000000226A78 " %"
 *   insn=0x0000000000226A78 string=0x0000000000226A7C "A"
 *   insn=0x0000000000226A7C string=0x0000000000226A80 "h"
 *   insn=0x0000000000226A88 string=0x0000000000226A8C "j"
 *   insn=0x0000000000226AA4 string=0x0000000000226AA8 "h""
 *   insn=0x0000000000226AB0 string=0x0000000000226AB4 "`"
 *   insn=0x0000000000226AB8 string=0x0000000000583C3C "model"
 *   insn=0x0000000000226AC4 string=0x0000000000226AC8 "<"
 *   insn=0x0000000000226AE0 string=0x00000000001F6CE0 "0'"
 *   insn=0x0000000000226AEC string=0x0000000000226AF0 "a"
 *   insn=0x0000000000226B1C string=0x0000000000226B20 ")=G"
 *   insn=0x0000000000226B20 string=0x0000000000226B24 "!"
 *   insn=0x0000000000226B28 string=0x0000000000226B2C "\t"
 *   insn=0x0000000000226B28 string=0x0000000000226B40 "\t"
 *   insn=0x0000000000226B2C string=0x0000000000226B30 "*"
 *   insn=0x0000000000226B30 string=0x0000000000226B34 "\n"
 *   insn=0x0000000000226B3C string=0x0000000000226B4C "?"
 *   insn=0x0000000000226B40 string=0x0000000000226B44 "*"
 *   insn=0x0000000000226B44 string=0x0000000000226B48 "\n"
 *   insn=0x0000000000226B4C string=0x0000000000226B50 ","
 *   insn=0x0000000000226B60 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000226B68 string=0x0000000000226B6C "(a"
 *   insn=0x0000000000226B74 string=0x0000000000226BCC "`B@"
 *   insn=0x0000000000226B78 string=0x0000000000226B7C "J=G"
 *   insn=0x0000000000226B7C string=0x0000000000226B80 ")!"
 *   insn=0x0000000000226B80 string=0x0000000000226B84 "j"
 *   insn=0x0000000000226B84 string=0x0000000000226B88 "*"
 *   insn=0x0000000000226B84 string=0x0000000000226BB0 "*"
 *   insn=0x0000000000226B88 string=0x0000000000226B8C "K"
 *   insn=0x0000000000226B8C string=0x0000000000226B90 "+"
 *   insn=0x0000000000226B94 string=0x0000000000226B98 "_"
 *   insn=0x0000000000226BA8 string=0x0000000000226BAC ""
 *   insn=0x0000000000226BB0 string=0x0000000000226BB4 "K"
 *   insn=0x0000000000226BB4 string=0x0000000000226BB8 "+"
 *   insn=0x0000000000226BB8 string=0x0000000000226BBC "_"
 *   insn=0x0000000000226BBC string=0x0000000000226BC0 ""
 *   insn=0x0000000000226BD0 string=0x0000000000226BD4 "h:"
 *   insn=0x0000000000226BD8 string=0x0000000000226BDC "@"
 *   insn=0x0000000000226BDC string=0x0000000000226BE0 ""
 *   insn=0x0000000000226BE0 string=0x0000000000226BE4 ""
 *   insn=0x0000000000226BE8 string=0x0000000000226BEC ""
 *   insn=0x0000000000226BEC string=0x0000000000226BF0 ""
 *   insn=0x0000000000226BF8 string=0x0000000000226BFC "5N"
 *   insn=0x0000000000226BFC string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000226C00 string=0x0000000000226C04 "0k"
 *   insn=0x0000000000226C18 string=0x0000000000226C1C "h"@"
 *   insn=0x0000000000226C20 string=0x0000000000226C24 "a"
 *   insn=0x0000000000226C30 string=0x0000000000226C34 "hz@"
 *   insn=0x0000000000226C38 string=0x0000000000226C3C "h"
 *   insn=0x0000000000226C40 string=0x0000000000226C44 "h"
 *   insn=0x0000000000226C48 string=0x0000000000226C4C "h"
 *   insn=0x0000000000226C50 string=0x0000000000226C54 "`"
 *   insn=0x0000000000226C58 string=0x0000000000226C5C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelTransformControllerComponent::ModelTransformControllerComponent(
        Caver::ModelTransformControllerComponent *this)
{
  __int128 v1; // q0
  void *v2; // x0
  unsigned int *v3; // x8
  int v4; // w9
  _QWORD v5[3]; // [xsp+28h] [xbp-48h] BYREF

  *(_QWORD *)&v1 = &off_6BA4E8;
  *((_QWORD *)&v1 + 1) = &off_6BA528;
  v5[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_OWORD *)this + 1) = v1;
  *(_QWORD *)this = off_6BA3D0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = off_6B9438;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_BYTE *)this + 136) = 1;
  *(_QWORD *)((char *)this + 148) = 0;
  *(_QWORD *)((char *)this + 140) = 0;
  *(_OWORD *)((char *)this + 156) = xmmword_583490;
  sub_566BB8((int)v5, "model");
  Caver::Component::BindOutlet();
  v2 = (void *)(v5[0] - 24LL);
  if ( (__int64 *)(v5[0] - 24LL) != &qword_6FD2E0 )
  {
    v3 = (unsigned int *)(v5[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v4 = __ldaxr(v3);
      while ( __stlxr(v4 - 1, v3) );
    }
    else
    {
      v4 = (*v3)--;
    }
    if ( v4 <= 0 )
      operator delete(v2);
  }
}

