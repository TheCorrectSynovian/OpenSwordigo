/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002240E4
 * Mangled: _ZN5Caver14ModelComponent9LoadModelEv
 * Demangled: Caver::ModelComponent::LoadModel(void)
 *
 * Callers: 2
 *   0x00000000001FC920  Caver::ModelComponent::LoadModel(void)
 *   0x0000000000224024  Caver::ModelComponent::setModelName(std::string const&)
 *
 * Callees: 8
 *   0x00000000001F34B0  Caver::ModelLibrary::ModelForName(std::string const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCE60  Caver::ModelLibrary::sharedLibrary(void)
 *   0x00000000002021C0  Caver::ModelInstance::~ModelInstance()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000224274  Caver::ModelComponent::Prepare(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x00000000002240F4 string=0x00000000002240F8 "U"
 *   insn=0x0000000000224104 string=0x0000000000224108 "h>@"
 *   insn=0x000000000022410C string=0x0000000000224110 "Tc"
 *   insn=0x0000000000224110 string=0x0000000000224114 "a"
 *   insn=0x0000000000224110 string=0x00000000001FCE60 "0'"
 *   insn=0x000000000022411C string=0x00000000001F34B0 "P'"
 *   insn=0x0000000000224124 string=0x0000000000224128 "\n"
 *   insn=0x0000000000224124 string=0x0000000000224134 "tB@"
 *   insn=0x0000000000224128 string=0x000000000022412C "J"
 *   insn=0x000000000022412C string=0x0000000000224130 "\n"
 *   insn=0x0000000000224134 string=0x0000000000224138 "i"
 *   insn=0x0000000000224138 string=0x000000000022413C "4"
 *   insn=0x0000000000224140 string=0x0000000000224144 ""
 *   insn=0x0000000000224150 string=0x0000000000224154 "\t@"
 *   insn=0x0000000000224160 string=0x0000000000224164 ""
 *   insn=0x0000000000224170 string=0x0000000000224174 "@"
 *   insn=0x0000000000224180 string=0x0000000000224184 "4"
 *   insn=0x0000000000224184 string=0x00000000002241C8 "tF@"
 *   insn=0x0000000000224188 string=0x000000000022418C ""
 *   insn=0x000000000022419C string=0x00000000002241A0 "\t@"
 *   insn=0x00000000002241A8 string=0x00000000002241AC ""
 *   insn=0x00000000002241BC string=0x00000000002241C0 "@"
 *   insn=0x00000000002241DC string=0x00000000002241E0 "4L"
 *   insn=0x00000000002241E0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002241F0 string=0x0000000000224208 "2H"
 *   insn=0x0000000000224208 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000224218 string=0x000000000022421C ""
 *   insn=0x0000000000224220 string=0x0000000000224224 "A"
 *   insn=0x0000000000224228 string=0x000000000022422C "\t@"
 *   insn=0x0000000000224238 string=0x000000000022423C ""
 *   insn=0x0000000000224240 string=0x0000000000224244 "A"
 *   insn=0x0000000000224248 string=0x000000000022424C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelComponent::LoadModel(Caver::ModelInstance **this)
{
  Caver::ModelInstance *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  Caver::ModelInstance *v7; // x20
  Caver::ModelInstance *v8; // [xsp+8h] [xbp-38h]
  Caver::ModelInstance *v9; // [xsp+10h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  if ( !this[15] )
  {
    Caver::ModelLibrary::sharedLibrary((Caver::ModelLibrary *)this);
    Caver::ModelLibrary::ModelForName();
    if ( v9 )
      ++*((_QWORD *)v9 + 1);
    v2 = this[16];
    this[15] = v8;
    this[16] = v9;
    if ( v2 )
    {
      v3 = *((_QWORD *)v2 + 1) - 1LL;
      *((_QWORD *)v2 + 1) = v3;
      if ( !v3 )
      {
        (*(void (__fastcall **)(Caver::ModelInstance *))(*(_QWORD *)v2 + 16LL))(v2);
        v4 = *((_QWORD *)v2 + 2) - 1LL;
        *((_QWORD *)v2 + 2) = v4;
        if ( !v4 )
          (*(void (__fastcall **)(Caver::ModelInstance *))(*(_QWORD *)v2 + 24LL))(v2);
      }
    }
    if ( v9 )
    {
      v5 = *((_QWORD *)v9 + 1) - 1LL;
      *((_QWORD *)v9 + 1) = v5;
      if ( !v5 )
      {
        (*(void (__fastcall **)())(*(_QWORD *)v9 + 16LL))();
        v6 = *((_QWORD *)v9 + 2) - 1LL;
        *((_QWORD *)v9 + 2) = v6;
        if ( !v6 )
          (*(void (__fastcall **)())(*(_QWORD *)v9 + 24LL))();
      }
    }
    v7 = this[17];
    this[17] = 0;
    if ( v7 )
    {
      Caver::ModelInstance::~ModelInstance(v7);
      operator delete(v7);
    }
  }
}

