/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B2E18
 * Mangled: _ZN5Caver23DoorControllerComponent7PrepareEv
 * Demangled: Caver::DoorControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3CB0  Caver::DoorControllerComponent::SetOpen(bool)
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *   0x0000000000201B80  Caver::DoorControllerComponent::RegisterLibrary(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 104
 *   insn=0x00000000002B2E28 string=0x00000000002B2E2C "U;"
 *   insn=0x00000000002B2E2C string=0x00000000002B2E30 "`N@"
 *   insn=0x00000000002B2E34 string=0x00000000002B2E38 "`""
 *   insn=0x00000000002B2E34 string=0x00000000002B2E4C "uB@"
 *   insn=0x00000000002B2E3C string=0x00000000002B2E40 "("
 *   insn=0x00000000002B2E40 string=0x00000000002B2E44 "`N@"
 *   insn=0x00000000002B2E40 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002B2E44 string=0x00000000002B2E48 "`"
 *   insn=0x00000000002B2E48 string=0x00000000002B2EF4 "aBC9"
 *   insn=0x00000000002B2E50 string=0x00000000002B2E54 ""
 *   insn=0x00000000002B2E50 string=0x00000000002B2EC4 "`"
 *   insn=0x00000000002B2E54 string=0x00000000002B2E58 ""
 *   insn=0x00000000002B2E68 string=0x00000000002B2E6C "\t"
 *   insn=0x00000000002B2E7C string=0x00000000002B2E80 "@"
 *   insn=0x00000000002B2E80 string=0x00000000002B2E84 ""
 *   insn=0x00000000002B2E84 string=0x00000000002B2E88 ""
 *   insn=0x00000000002B2E8C string=0x00000000002B2E90 ""
 *   insn=0x00000000002B2E90 string=0x00000000002B2E94 ""
 *   insn=0x00000000002B2EA0 string=0x00000000002B2EA4 ""
 *   insn=0x00000000002B2EA8 string=0x00000000002B2EAC "A"
 *   insn=0x00000000002B2EB4 string=0x00000000002B2EB8 ""
 *   insn=0x00000000002B2EBC string=0x00000000002B2EC0 ""
 *   insn=0x00000000002B2ECC string=0x00000000002B2ED0 "uB@"
 *   insn=0x00000000002B2ED4 string=0x00000000002B2ED8 "`N@"
 *   insn=0x00000000002B2EDC string=0x00000000002B2EE0 "`""
 *   insn=0x00000000002B2EE8 string=0x00000000002B2EEC "`N@"
 *   insn=0x00000000002B2F04 string=0x00000000002B2F08 "j"
 *   insn=0x00000000002B2F08 string=0x00000000001F3CB0 "P'"
 *   insn=0x00000000002B2F0C string=0x00000000002B2F10 "4"
 *   insn=0x00000000002B2F14 string=0x00000000002B2F18 ""
 *   insn=0x00000000002B2F24 string=0x00000000002B2F28 ""
 *   insn=0x00000000002B2F34 string=0x00000000002B2F38 "c:"
 *   insn=0x00000000002B2F4C string=0x00000000002B2F50 "S"
 *   insn=0x00000000002B2F50 string=0x00000000002B2F54 "h"
 *   insn=0x00000000002B2F58 string=0x00000000002B2F5C ""
 *   insn=0x00000000002B2F64 string=0x0000000000585710 "DoorController"
 *   insn=0x00000000002B2F88 string=0x00000000001F7A00 "0'"
 *   insn=0x00000000002B2F90 string=0x00000000002B2F94 ")"
 *   insn=0x00000000002B2F9C string=0x00000000002B2FA0 "!"
 *   insn=0x00000000002B2FA0 string=0x00000000002B2FA4 "h"
 *   insn=0x00000000002B2FC4 string=0x00000000002B2FC8 ")=G"
 *   insn=0x00000000002B2FC8 string=0x00000000002B2FCC "!"
 *   insn=0x00000000002B2FD0 string=0x00000000002B2FD4 "\t"
 *   insn=0x00000000002B2FD0 string=0x00000000002B2FE8 "\t"
 *   insn=0x00000000002B2FD4 string=0x00000000002B2FD8 "*"
 *   insn=0x00000000002B2FD8 string=0x00000000002B2FDC "\n"
 *   insn=0x00000000002B2FE4 string=0x00000000002B2FF4 "?"
 *   insn=0x00000000002B2FE8 string=0x00000000002B2FEC "*"
 *   insn=0x00000000002B2FEC string=0x00000000002B2FF0 "\n"
 *   insn=0x00000000002B2FF4 string=0x00000000002B2FF8 "l"
 *   insn=0x00000000002B3008 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B3010 string=0x00000000002B3014 "J"
 *   insn=0x00000000002B3018 string=0x00000000002B301C "(a"
 *   insn=0x00000000002B3028 string=0x00000000002B302C "J=G"
 *   insn=0x00000000002B302C string=0x00000000002B3030 ")!"
 *   insn=0x00000000002B3034 string=0x00000000002B3038 "*"
 *   insn=0x00000000002B3034 string=0x00000000002B3064 "*"
 *   insn=0x00000000002B3038 string=0x00000000002B303C "K"
 *   insn=0x00000000002B303C string=0x00000000002B3040 "+"
 *   insn=0x00000000002B3044 string=0x00000000002B3048 "_"
 *   insn=0x00000000002B3064 string=0x00000000002B3068 "K"
 *   insn=0x00000000002B3068 string=0x00000000002B306C "+"
 *   insn=0x00000000002B306C string=0x00000000002B3070 "_"
 *   insn=0x00000000002B3090 string=0x00000000002B3094 "`N@"
 *   insn=0x00000000002B3098 string=0x00000000002B309C "`""
 *   insn=0x00000000002B3098 string=0x00000000002B30B0 ""
 *   insn=0x00000000002B30A4 string=0x00000000002B30A8 "`N@"
 *   insn=0x00000000002B30A8 string=0x00000000002B30AC "@"
 *   insn=0x00000000002B30AC string=0x00000000002B3114 "hf@"
 *   insn=0x00000000002B30B0 string=0x00000000002B30B4 ""
 *   insn=0x00000000002B30BC string=0x00000000002B30C0 "4"
 *   insn=0x00000000002B30C0 string=0x00000000002B30C4 "hN@"
 *   insn=0x00000000002B30C8 string=0x00000000002B30CC "I@"
 *   insn=0x00000000002B30C8 string=0x00000000002B30D8 "t""
 *   insn=0x00000000002B30E4 string=0x00000000002B30E8 "iN@"
 *   insn=0x00000000002B30E8 string=0x00000000002B30EC "(I@"
 *   insn=0x00000000002B30FC string=0x00000000002B3100 "x"
 *   insn=0x00000000002B3100 string=0x00000000002B3104 "hN@"
 *   insn=0x00000000002B3104 string=0x00000000002B3108 "I@"
 *   insn=0x00000000002B310C string=0x00000000002B3110 "\t"
 *   insn=0x00000000002B3118 string=0x00000000002B311C "`"
 *   insn=0x00000000002B3118 string=0x00000000002B3130 "tB@"
 *   insn=0x00000000002B3120 string=0x00000000002B3124 "o"
 *   insn=0x00000000002B3124 string=0x00000000002B3128 "hf@"
 *   insn=0x00000000002B312C string=0x00000000002B3164 "h"
 *   insn=0x00000000002B3134 string=0x00000000002B31C4 "`"
 *   insn=0x00000000002B3138 string=0x00000000002B313C ""
 *   insn=0x00000000002B313C string=0x00000000002B3140 ""
 *   insn=0x00000000002B3140 string=0x00000000002B3144 ""
 *   insn=0x00000000002B3144 string=0x00000000002B3148 "`f@"
 *   insn=0x00000000002B314C string=0x00000000002B3150 "`"
 *   insn=0x00000000002B3154 string=0x00000000002B3158 "b"
 *   insn=0x00000000002B3158 string=0x00000000002B315C "`f@"
 *   insn=0x00000000002B3160 string=0x00000000001F4FA0 "P'"
 *   insn=0x00000000002B3168 string=0x00000000002B316C "iB"
 *   insn=0x00000000002B317C string=0x00000000002B3180 "s"
 *   insn=0x00000000002B3188 string=0x00000000002B318C ""
 *   insn=0x00000000002B318C string=0x00000000002B3190 "Q@"
 *   insn=0x00000000002B31A4 string=0x00000000001FD0F0 "0'"
 *   insn=0x00000000002B31C8 string=0x00000000002B31CC "E"
 *   insn=0x00000000002B31CC string=0x00000000002B31D0 "tB@"
 *   insn=0x00000000002B31D4 string=0x00000000002B31D8 "H"
 *   insn=0x00000000002B31E0 string=0x00000000002B31E4 "?"
 *   insn=0x00000000002B31E8 string=0x00000000002B31EC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DoorControllerComponent::Prepare(Caver::DoorControllerComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x21
  __int64 v4; // x0
  _DWORD *v5; // x20
  _DWORD *v6; // x0
  int v7; // w8
  int v8; // w8

  Caver::DoorControllerComponent::RegisterLibrary(this);
  v2 = *((_QWORD *)this + 19);
  if ( v2
    || (Caver::ComponentOutletBase::Connect((Caver::DoorControllerComponent *)((char *)this + 136), this),
        (v2 = *((_QWORD *)this + 19)) != 0) )
  {
    v3 = *((_QWORD *)this + 16);
    if ( !v3 )
    {
      Caver::ComponentOutletBase::Connect((Caver::DoorControllerComponent *)((char *)this + 112), this);
      v3 = *((_QWORD *)this + 16);
      if ( !v3 )
        return Caver::DoorControllerComponent::SetOpen(this, *((_BYTE *)this + 208));
      v2 = *((_QWORD *)this + 19);
      if ( !v2 )
      {
        Caver::ComponentOutletBase::Connect((Caver::DoorControllerComponent *)((char *)this + 136), this);
        v2 = *((_QWORD *)this + 19);
      }
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
    v5 = (_DWORD *)v4;
    if ( v4 )
      *(_DWORD *)(v4 + 8) += 2;
    v6 = *(_DWORD **)(v3 + 160);
    *(_QWORD *)(v3 + 160) = v5;
    if ( v6 )
    {
      v7 = v6[2] - 1;
      v6[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    if ( v5 )
    {
      v8 = v5[2] - 1;
      v5[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return Caver::DoorControllerComponent::SetOpen(this, *((_BYTE *)this + 208));
}

