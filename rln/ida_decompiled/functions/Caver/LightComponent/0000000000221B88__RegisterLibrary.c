/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221B88
 * Mangled: _ZN5Caver14LightComponent15RegisterLibraryEv
 * Demangled: Caver::LightComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000200E70  Caver::LightComponent::RegisterLibrary(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001FA090  Caver::FloatColorFromProtobufMessage(Caver::Proto::FloatColor const&)
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x0000000000221B94 string=0x0000000000221B98 "S"
 *   insn=0x0000000000221B98 string=0x0000000000221B9C "h"
 *   insn=0x0000000000221BA0 string=0x0000000000221BA4 ""
 *   insn=0x0000000000221BAC string=0x0000000000583FD5 "Light"
 *   insn=0x0000000000221BD0 string=0x00000000001F7A00 "0'"
 *   insn=0x0000000000221BD4 string=0x0000000000221BD8 ")&"
 *   insn=0x0000000000221BD8 string=0x0000000000221BDC ")"
 *   insn=0x0000000000221BE4 string=0x0000000000221BE8 "!"
 *   insn=0x0000000000221BE8 string=0x0000000000221BEC "h"
 *   insn=0x0000000000221BE8 string=0x0000000000221C0C "\t&"
 *   insn=0x0000000000221C0C string=0x0000000000221C10 ")=G"
 *   insn=0x0000000000221C10 string=0x0000000000221C14 "!"
 *   insn=0x0000000000221C18 string=0x0000000000221C1C "\t"
 *   insn=0x0000000000221C18 string=0x0000000000221C30 "\t"
 *   insn=0x0000000000221C1C string=0x0000000000221C20 "*"
 *   insn=0x0000000000221C20 string=0x0000000000221C24 "\n"
 *   insn=0x0000000000221C2C string=0x0000000000221C3C "?"
 *   insn=0x0000000000221C30 string=0x0000000000221C34 "*"
 *   insn=0x0000000000221C34 string=0x0000000000221C38 "\n"
 *   insn=0x0000000000221C3C string=0x0000000000221C40 "l"
 *   insn=0x0000000000221C50 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000221C54 string=0x0000000000221C58 "*&"
 *   insn=0x0000000000221C58 string=0x0000000000221C5C "J"
 *   insn=0x0000000000221C60 string=0x0000000000221C64 "(a"
 *   insn=0x0000000000221C6C string=0x0000000000221C70 "\n&"
 *   insn=0x0000000000221C70 string=0x0000000000221C74 "J=G"
 *   insn=0x0000000000221C74 string=0x0000000000221C78 ")!"
 *   insn=0x0000000000221C7C string=0x0000000000221C80 "*"
 *   insn=0x0000000000221C7C string=0x0000000000221CAC "*"
 *   insn=0x0000000000221C80 string=0x0000000000221C84 "K"
 *   insn=0x0000000000221C84 string=0x0000000000221C88 "+"
 *   insn=0x0000000000221C8C string=0x0000000000221C90 "_"
 *   insn=0x0000000000221CA4 string=0x0000000000221CA8 ""
 *   insn=0x0000000000221CAC string=0x0000000000221CB0 "K"
 *   insn=0x0000000000221CB0 string=0x0000000000221CB4 "+"
 *   insn=0x0000000000221CB4 string=0x0000000000221CB8 "_"
 *   insn=0x0000000000221CD8 string=0x0000000000221CDC "U"
 *   insn=0x0000000000221CF0 string=0x0000000000221CF4 "(&"
 *   insn=0x0000000000221CF0 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000221CF4 string=0x0000000000221CF8 "5C"
 *   insn=0x0000000000221D04 string=0x0000000000221D08 ""t"
 *   insn=0x0000000000221D10 string=0x0000000000221D14 "\t"
 *   insn=0x0000000000221D14 string=0x0000000000221D18 "?"
 *   insn=0x0000000000221D18 string=0x0000000000221D1C "H"
 *   insn=0x0000000000221D1C string=0x0000000000221D20 "hr"
 *   insn=0x0000000000221D24 string=0x0000000000221D28 "6&"
 *   insn=0x0000000000221D28 string=0x0000000000221D2C "hv"
 *   insn=0x0000000000221D3C string=0x0000000000221D40 "("
 *   insn=0x0000000000221D4C string=0x00000000001FA090 "0'"
 *   insn=0x0000000000221D50 string=0x0000000000221D54 "`"
 *   insn=0x0000000000221D5C string=0x0000000000221D60 ""
 *   insn=0x0000000000221D60 string=0x0000000000221D64 "H"
 *   insn=0x0000000000221D64 string=0x0000000000221D68 "H"
 *   insn=0x0000000000221D74 string=0x0000000000221D78 "("
 *   insn=0x0000000000221D78 string=0x0000000000221D7C ""
 *   insn=0x0000000000221D7C string=0x0000000000221D80 "\t"
 *   insn=0x0000000000221D80 string=0x0000000000221D84 ""
 *   insn=0x0000000000221D84 string=0x0000000000221D88 "iR"
 *   insn=0x0000000000221D88 string=0x0000000000221D8C "h"
 *   insn=0x0000000000221D9C string=0x0000000000221DDC "=Q"
 *   insn=0x0000000000221DB4 string=0x0000000000221DB8 "i"
 *   insn=0x0000000000221DB8 string=0x0000000000221DBC "H"
 *   insn=0x0000000000221DC0 string=0x0000000000221DC4 "i"
 *   insn=0x0000000000221DC4 string=0x0000000000221DC8 ""
 *   insn=0x0000000000221DCC string=0x0000000000221DD0 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::LightComponent::RegisterLibrary(Caver::LightComponent *this)
{
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  _QWORD v4[3]; // [xsp+50h] [xbp-28h] BYREF

  v4[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v4, "Light");
  Caver::ProgramState::RegisterLibrary();
  v1 = (void *)(v4[0] - 24LL);
  if ( (__int64 *)(v4[0] - 24LL) != &qword_6FD2E0 )
  {
    v2 = (unsigned int *)(v4[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v3 = __ldaxr(v2);
      while ( __stlxr(v3 - 1, v2) );
    }
    else
    {
      v3 = (*v2)--;
    }
    if ( v3 <= 0 )
      operator delete(v1);
  }
}

