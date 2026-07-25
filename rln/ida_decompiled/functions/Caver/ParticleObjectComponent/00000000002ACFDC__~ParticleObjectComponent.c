/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ACFDC
 * Mangled: _ZN5Caver23ParticleObjectComponentD2Ev
 * Demangled: Caver::ParticleObjectComponent::~ParticleObjectComponent()
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7640  Caver::PhysicsObjectState::~PhysicsObjectState()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000202010  Caver::ParticleObjectComponent::ParticleObjectComponent(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002AD1FC  Caver::ParticleObjectComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 66
 *   insn=0x00000000002ACFE8 string=0x00000000002ACFEC ""
 *   insn=0x00000000002ACFF0 string=0x00000000002ACFF4 "`""
 *   insn=0x00000000002ACFF4 string=0x00000000002ACFF8 "\n"
 *   insn=0x00000000002ACFF8 string=0x00000000002ACFFC "\tA"
 *   insn=0x00000000002ACFFC string=0x00000000002AD000 ""
 *   insn=0x00000000002AD000 string=0x00000000002AD004 "@"
 *   insn=0x00000000002AD008 string=0x00000000002AD00C "i"
 *   insn=0x00000000002AD00C string=0x00000000002AD010 "`"
 *   insn=0x00000000002AD014 string=0x00000000001F7640 "0'"
 *   insn=0x00000000002AD018 string=0x00000000002AD01C "`B@"
 *   insn=0x00000000002AD01C string=0x00000000002AD020 "i@"
 *   insn=0x00000000002AD020 string=0x00000000002AD024 "A"
 *   insn=0x00000000002AD024 string=0x00000000002AD028 "h:"
 *   insn=0x00000000002AD02C string=0x00000000002AD030 "@"
 *   insn=0x00000000002AD030 string=0x00000000002AD034 ""
 *   insn=0x00000000002AD034 string=0x00000000002AD038 ""
 *   insn=0x00000000002AD03C string=0x00000000002AD040 ""
 *   insn=0x00000000002AD040 string=0x00000000002AD044 ""
 *   insn=0x00000000002AD058 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002AD068 string=0x00000000002AD06C "`B@"
 *   insn=0x00000000002AD06C string=0x00000000002AD070 "i@"
 *   insn=0x00000000002AD070 string=0x00000000002AD074 "A"
 *   insn=0x00000000002AD074 string=0x00000000002AD078 "h:"
 *   insn=0x00000000002AD07C string=0x00000000002AD080 "@"
 *   insn=0x00000000002AD080 string=0x00000000002AD084 ""
 *   insn=0x00000000002AD084 string=0x00000000002AD088 ""
 *   insn=0x00000000002AD08C string=0x00000000002AD090 ""
 *   insn=0x00000000002AD090 string=0x00000000002AD094 ""
 *   insn=0x00000000002AD0A4 string=0x00000000002AD0A8 "R"
 *   insn=0x00000000002AD0BC string=0x00000000002AD0C0 ""
 *   insn=0x00000000002AD0C4 string=0x00000000002AD0C8 "`""
 *   insn=0x00000000002AD0C8 string=0x00000000002AD0CC "\n"
 *   insn=0x00000000002AD0CC string=0x00000000002AD0D0 "\tA"
 *   insn=0x00000000002AD0D0 string=0x00000000002AD0D4 ""
 *   insn=0x00000000002AD0D4 string=0x00000000002AD0D8 "@"
 *   insn=0x00000000002AD0DC string=0x00000000002AD0E0 "i"
 *   insn=0x00000000002AD0E0 string=0x00000000002AD0E4 "`"
 *   insn=0x00000000002AD0E4 string=0x00000000002AD0E8 "V)"
 *   insn=0x00000000002AD0EC string=0x00000000002AD0F0 "`B@"
 *   insn=0x00000000002AD0F0 string=0x00000000002AD0F4 "i@"
 *   insn=0x00000000002AD0F4 string=0x00000000002AD0F8 "A"
 *   insn=0x00000000002AD0F8 string=0x00000000002AD0FC "h:"
 *   insn=0x00000000002AD100 string=0x00000000002AD104 "@"
 *   insn=0x00000000002AD104 string=0x00000000002AD108 ""
 *   insn=0x00000000002AD108 string=0x00000000002AD10C ""
 *   insn=0x00000000002AD110 string=0x00000000002AD114 ""
 *   insn=0x00000000002AD114 string=0x00000000002AD118 ""
 *   insn=0x00000000002AD130 string=0x00000000002AD134 "_("
 *   insn=0x00000000002AD134 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002AD14C string=0x00000000002AD150 "`B@"
 *   insn=0x00000000002AD150 string=0x00000000002AD154 "i@"
 *   insn=0x00000000002AD154 string=0x00000000002AD158 "A"
 *   insn=0x00000000002AD158 string=0x00000000002AD15C "h:"
 *   insn=0x00000000002AD160 string=0x00000000002AD164 "@"
 *   insn=0x00000000002AD164 string=0x00000000002AD168 ""
 *   insn=0x00000000002AD168 string=0x00000000002AD16C ""
 *   insn=0x00000000002AD170 string=0x00000000002AD174 ""
 *   insn=0x00000000002AD174 string=0x00000000002AD178 ""
 *   insn=0x00000000002AD188 string=0x00000000002AD18C "I("
 *   insn=0x00000000002AD194 string=0x00000000002AD198 "m"
 *   insn=0x00000000002AD1B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002AD1B8 string=0x00000000002AD1BC "h"@"
 *   insn=0x00000000002AD1BC string=0x00000000002AD1C0 "a"
 *   insn=0x00000000002AD1C8 string=0x00000000002AD1CC "7"
 *   insn=0x00000000002AD1CC string=0x00000000002AD1D0 "hz@"
 *   insn=0x00000000002AD1EC string=0x00000000002AD1F0 "0("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleObjectComponent::~ParticleObjectComponent(Caver::ParticleObjectComponent *this)
{
  __int128 v2; // q0
  _DWORD *v3; // x0
  int v4; // w8

  *(_QWORD *)&v2 = &off_6C3AA8;
  *((_QWORD *)&v2 + 1) = &off_6C3AE8;
  *(_QWORD *)this = off_6C3990;
  *((_OWORD *)this + 1) = v2;
  Caver::PhysicsObjectState::~PhysicsObjectState((Caver::ParticleObjectComponent *)((char *)this + 136));
  v3 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = off_6B9438;
  if ( v3 )
  {
    v4 = v3[2] - 1;
    v3[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  Caver::Component::~Component(this);
}

