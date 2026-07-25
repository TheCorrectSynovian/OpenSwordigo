/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4F54
 * Mangled: _ZN5Caver17ParticleComponent7PrepareEv
 * Demangled: Caver::ParticleComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x00000000002A4F64 string=0x00000000002A4F68 "U"
 *   insn=0x00000000002A4F7C string=0x00000000002A4F80 ""
 *   insn=0x00000000002A4F84 string=0x00000000002A5000 "h>@"
 *   insn=0x00000000002A4F88 string=0x00000000001FA350 "0'"
 *   insn=0x00000000002A4FA0 string=0x00000000002A4FA4 "@"
 *   insn=0x00000000002A4FA0 string=0x00000000002A4FB0 "h>@"
 *   insn=0x00000000002A4FA4 string=0x00000000002A4FA8 ""
 *   insn=0x00000000002A4FA8 string=0x00000000002A4FAC ""
 *   insn=0x00000000002A4FB0 string=0x00000000002A4FB4 "`>"
 *   insn=0x00000000002A4FB4 string=0x00000000002A4FB8 "H"
 *   insn=0x00000000002A4FB8 string=0x00000000002A4FBC "\t\t@"
 *   insn=0x00000000002A4FBC string=0x00000000002A4FC0 ")"
 *   insn=0x00000000002A4FC0 string=0x00000000002A4FC4 "\t\t"
 *   insn=0x00000000002A4FC8 string=0x00000000002A4FCC "\t"
 *   insn=0x00000000002A4FCC string=0x00000000002A4FD0 ")"
 *   insn=0x00000000002A4FD4 string=0x00000000002A4FD8 " "
 *   insn=0x00000000002A4FE0 string=0x00000000002A4FE4 "@"
 *   insn=0x00000000002A4FE4 string=0x00000000002A4FE8 ""
 *   insn=0x00000000002A4FE8 string=0x00000000002A4FEC ""
 *   insn=0x00000000002A4FF0 string=0x00000000002A4FF4 ""
 *   insn=0x00000000002A4FF4 string=0x00000000002A4FF8 ""
 *   insn=0x00000000002A5008 string=0x00000000002A500C "`"
 *   insn=0x00000000002A500C string=0x00000000002A5010 "!"
 *   insn=0x00000000002A5014 string=0x00000000002A5018 "  ""
 *   insn=0x00000000002A5024 string=0x00000000002A5028 "@"
 *   insn=0x00000000002A502C string=0x00000000002A5034 "a"
 *   insn=0x00000000002A505C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A5064 string=0x00000000002A5068 "("
 *   insn=0x00000000002A5068 string=0x00000000002A506C "\t\t@"
 *   insn=0x00000000002A506C string=0x00000000002A5070 ")"
 *   insn=0x00000000002A5070 string=0x00000000002A5074 "\t\t"
 *   insn=0x00000000002A5078 string=0x00000000002A507C "\t"
 *   insn=0x00000000002A507C string=0x00000000002A5080 ")"
 *   insn=0x00000000002A5084 string=0x00000000002A5088 " "
 *   insn=0x00000000002A508C string=0x00000000002A5090 "r"
 *   insn=0x00000000002A5094 string=0x00000000002A5098 "<@"
 *   insn=0x00000000002A50A4 string=0x00000000002A50A8 "!"
 *   insn=0x00000000002A50AC string=0x00000000002A50B0 "  ""
 *   insn=0x00000000002A50BC string=0x00000000002A50C0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleComponent::Prepare(__int64 this)
{
  __int64 v1; // x19
  _DWORD *v2; // x8
  int v3; // w9
  int v4; // w8
  __int64 v5; // x8
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s1
  __int64 v10; // [xsp+0h] [xbp-30h]

  v1 = this;
  _ReadStatusReg(TPIDR_EL0);
  if ( *(_QWORD *)(*(_QWORD *)(this + 112) - 24LL) )
  {
    Caver::TextureLibrary::sharedLibrary((Caver::TextureLibrary *)this);
    Caver::TextureLibrary::TextureForName();
    this = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v2 = *(_DWORD **)(v1 + 120);
    *(_QWORD *)(v1 + 120) = v10;
    if ( v2 )
    {
      v3 = v2[2] - 1;
      v2[2] = v3;
      if ( !v3 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
        this = v10;
      }
    }
    if ( this )
    {
      v4 = *(_DWORD *)(this + 8) - 1;
      *(_DWORD *)(this + 8) = v4;
      if ( !v4 )
        this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
    }
  }
  v5 = *(_QWORD *)(v1 + 120);
  if ( v5 )
  {
    v6 = *(float *)(v1 + 128);
    v7 = *(float *)(v5 + 84) / *(float *)(v5 + 88);
    if ( v7 <= 1.0 )
    {
      v9 = v6 * v7;
    }
    else
    {
      v8 = v6 / v7;
      v9 = *(float *)(v1 + 128);
      v6 = v8;
    }
    *(float *)(v1 + 132) = v9;
    *(float *)(v1 + 136) = v6;
  }
  return this;
}

