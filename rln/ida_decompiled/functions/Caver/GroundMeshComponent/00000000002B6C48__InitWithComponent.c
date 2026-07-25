/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B6C48
 * Mangled: _ZN5Caver19GroundMeshComponent17InitWithComponentEPKS0_
 * Demangled: Caver::GroundMeshComponent::InitWithComponent(Caver::GroundMeshComponent const*)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000002018A0  Caver::Proto::Component::Component(void)
 *   0x0000000000202380  Caver::Proto::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002B6EF4  Caver::GroundMeshComponent::~GroundMeshComponent()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 48
 *   insn=0x00000000002B6C58 string=0x00000000002B6C5C "U"
 *   insn=0x00000000002B6C70 string=0x00000000002B6C74 "+"
 *   insn=0x00000000002B6C78 string=0x00000000002B6C7C ""
 *   insn=0x00000000002B6C88 string=0x00000000002B6C8C "h"
 *   insn=0x00000000002B6C8C string=0x00000000002B6C90 ""
 *   insn=0x00000000002B6CCC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B6CFC string=0x00000000002B6D00 "=B"
 *   insn=0x00000000002B6D04 string=0x00000000002B6D08 "t"
 *   insn=0x00000000002B6D08 string=0x00000000002B6D0C "\n"
 *   insn=0x00000000002B6D0C string=0x00000000002B6D10 "\tA"
 *   insn=0x00000000002B6D10 string=0x00000000002B6D14 "@"
 *   insn=0x00000000002B6D14 string=0x00000000002B6D18 ""
 *   insn=0x00000000002B6D20 string=0x00000000002B6D24 "i"
 *   insn=0x00000000002B6D24 string=0x00000000002B6D28 "`"
 *   insn=0x00000000002B6D2C string=0x00000000002B6D88 "t"
 *   insn=0x00000000002B6D30 string=0x00000000002B6D34 "5"
 *   insn=0x00000000002B6D38 string=0x00000000002B6D3C ""
 *   insn=0x00000000002B6D48 string=0x00000000002B6D4C "\t@"
 *   insn=0x00000000002B6D58 string=0x00000000002B6D5C ""
 *   insn=0x00000000002B6D68 string=0x00000000002B6D6C "@"
 *   insn=0x00000000002B6D80 string=0x00000000002B6D84 "tF@"
 *   insn=0x00000000002B6D88 string=0x00000000002B6D94 "tZG"
 *   insn=0x00000000002B6D8C string=0x00000000002B6D90 "H"
 *   insn=0x00000000002B6D90 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B6D9C string=0x00000000002B6DF8 "t"
 *   insn=0x00000000002B6DA0 string=0x00000000002B6DA4 "5"
 *   insn=0x00000000002B6DA8 string=0x00000000002B6DAC ""
 *   insn=0x00000000002B6DB8 string=0x00000000002B6DBC "\t@"
 *   insn=0x00000000002B6DC8 string=0x00000000002B6DCC ""
 *   insn=0x00000000002B6DD8 string=0x00000000002B6DDC "@"
 *   insn=0x00000000002B6DF0 string=0x00000000002B6DF4 "t:@"
 *   insn=0x00000000002B6DFC string=0x00000000002B6E00 ","
 *   insn=0x00000000002B6E18 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002B6E20 string=0x00000000002B6E24 "h"
 *   insn=0x00000000002B6E28 string=0x00000000002B6E2C "!"
 *   insn=0x00000000002B6E44 string=0x00000000002B6E48 "A]"
 *   insn=0x00000000002B6E48 string=0x00000000002B6E4C "hF@"
 *   insn=0x00000000002B6E50 string=0x00000000002B6E54 "h"
 *   insn=0x00000000002B6E54 string=0x00000000002B6E60 "u^G"
 *   insn=0x00000000002B6E68 string=0x00000000002B6EC4 "u"
 *   insn=0x00000000002B6E6C string=0x00000000002B6E70 "6"
 *   insn=0x00000000002B6E74 string=0x00000000002B6E78 ""
 *   insn=0x00000000002B6E84 string=0x00000000002B6E88 "\t@"
 *   insn=0x00000000002B6E94 string=0x00000000002B6E98 ""
 *   insn=0x00000000002B6EA4 string=0x00000000002B6EA8 "@"
 *   insn=0x00000000002B6EBC string=0x00000000002B6EC0 "u:@"
 *   insn=0x00000000002B6ED4 string=0x00000000002B6ED8 "h"
 *   insn=0x00000000002B6EDC string=0x00000000002B6EE0 "]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshComponent::InitWithComponent(
        Caver::GroundMeshComponent *this,
        const Caver::GroundMeshComponent *a2)
{
  _BYTE v4[96]; // [xsp+48h] [xbp-88h] BYREF
  __int64 v5; // [xsp+A8h] [xbp-28h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Proto::Component::Component((Caver::Proto::Component *)v4);
  (*(void (__fastcall **)(const Caver::GroundMeshComponent *, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v4);
  (*(void (__fastcall **)(Caver::GroundMeshComponent *, _BYTE *))(*(_QWORD *)this + 32LL))(this, v4);
  Caver::Proto::Component::~Component((Caver::Proto::Component *)v4);
}

