/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A556C
 * Mangled: _ZN5Caver17ParticleComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FBB00  Caver::ParticleComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FA350  Caver::TextureLibrary::sharedLibrary(void)
 *   0x00000000001FF5B0  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002A58EC  Caver::ParticleComponent::SetSize(float)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 99
 *   insn=0x00000000002A557C string=0x00000000002A5580 "V"
 *   insn=0x00000000002A558C string=0x00000000002A5590 "?"
 *   insn=0x00000000002A559C string=0x00000000002A55A0 "lS"
 *   insn=0x00000000002A55A0 string=0x00000000001FA350 "0'"
 *   insn=0x00000000002A55F0 string=0x00000000002A55F4 "`"
 *   insn=0x00000000002A55F8 string=0x00000000002A55FC "+"
 *   insn=0x00000000002A5614 string=0x00000000002A5618 "\t\t@"
 *   insn=0x00000000002A5614 string=0x00000000002A5624 "`>@"
 *   insn=0x00000000002A5618 string=0x00000000002A561C ")"
 *   insn=0x00000000002A561C string=0x00000000002A5620 "\t\t"
 *   insn=0x00000000002A5624 string=0x00000000002A5628 "h>"
 *   insn=0x00000000002A562C string=0x00000000002A5630 "@"
 *   insn=0x00000000002A5630 string=0x00000000002A5634 ""
 *   insn=0x00000000002A5634 string=0x00000000002A5638 ""
 *   insn=0x00000000002A563C string=0x00000000002A5640 ""
 *   insn=0x00000000002A5640 string=0x00000000002A5644 ""
 *   insn=0x00000000002A564C string=0x00000000002A5650 "`"
 *   insn=0x00000000002A564C string=0x0000000000583944 "\n"
 *   insn=0x00000000002A565C string=0x00000000002A5660 "h>@"
 *   insn=0x00000000002A5664 string=0x00000000002A5668 "  ""
 *   insn=0x00000000002A5668 string=0x00000000002A566C " "
 *   insn=0x00000000002A566C string=0x00000000002A5670 "`"
 *   insn=0x00000000002A5670 string=0x00000000002A5674 ""
 *   insn=0x00000000002A5674 string=0x00000000002A5678 "!"
 *   insn=0x00000000002A567C string=0x00000000002A5680 "  ""
 *   insn=0x00000000002A5680 string=0x00000000002A5684 "M"
 *   insn=0x00000000002A568C string=0x00000000002A5690 "@"
 *   insn=0x00000000002A5694 string=0x00000000002A56F0 "a"
 *   insn=0x00000000002A569C string=0x00000000002A56A0 "h>@"
 *   insn=0x00000000002A56A0 string=0x00000000002A56A4 "`"
 *   insn=0x00000000002A56AC string=0x00000000002A56B0 "!"
 *   insn=0x00000000002A56B4 string=0x00000000002A56B8 "  ""
 *   insn=0x00000000002A56B8 string=0x00000000002A56BC "-"
 *   insn=0x00000000002A56C4 string=0x00000000002A56C8 "@"
 *   insn=0x00000000002A56CC string=0x00000000002A56E4 "a"
 *   insn=0x00000000002A56D8 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002A56F8 string=0x00000000002A56FC "@"
 *   insn=0x00000000002A56FC string=0x00000000002A5700 ""
 *   insn=0x00000000002A5700 string=0x00000000002A5704 ""
 *   insn=0x00000000002A5708 string=0x00000000002A570C ""
 *   insn=0x00000000002A570C string=0x00000000002A5710 ""
 *   insn=0x00000000002A573C string=0x00000000002A5740 ")=G"
 *   insn=0x00000000002A5740 string=0x00000000002A5744 "!"
 *   insn=0x00000000002A5748 string=0x00000000002A574C "\t"
 *   insn=0x00000000002A5748 string=0x00000000002A5784 "\t"
 *   insn=0x00000000002A574C string=0x00000000002A5750 "*"
 *   insn=0x00000000002A5750 string=0x00000000002A5754 "\n"
 *   insn=0x00000000002A5758 string=0x00000000002A575C ""
 *   insn=0x00000000002A575C string=0x00000000002A5790 "?"
 *   insn=0x00000000002A5760 string=0x00000000002A5764 ")=G"
 *   insn=0x00000000002A5764 string=0x00000000002A5768 "!"
 *   insn=0x00000000002A5768 string=0x00000000002A576C "\t"
 *   insn=0x00000000002A576C string=0x00000000002A5770 "\t"
 *   insn=0x00000000002A576C string=0x00000000002A57AC "\t"
 *   insn=0x00000000002A5770 string=0x00000000002A5774 "*"
 *   insn=0x00000000002A5774 string=0x00000000002A5778 "\n"
 *   insn=0x00000000002A5780 string=0x00000000002A57B8 "?"
 *   insn=0x00000000002A5784 string=0x00000000002A5788 "*"
 *   insn=0x00000000002A5788 string=0x00000000002A578C "\n"
 *   insn=0x00000000002A5790 string=0x00000000002A5794 "l"
 *   insn=0x00000000002A57A0 string=0x00000000002A57A4 "("
 *   insn=0x00000000002A57AC string=0x00000000002A57B0 "*"
 *   insn=0x00000000002A57B0 string=0x00000000002A57B4 "\n"
 *   insn=0x00000000002A57C8 string=0x00000000002A57CC "h"
 *   insn=0x00000000002A57D4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A57E0 string=0x00000000002A57E4 "(a"
 *   insn=0x00000000002A57F0 string=0x00000000002A57F4 "J=G"
 *   insn=0x00000000002A57F4 string=0x00000000002A57F8 ")!"
 *   insn=0x00000000002A57FC string=0x00000000002A5800 "*"
 *   insn=0x00000000002A57FC string=0x00000000002A5830 "*"
 *   insn=0x00000000002A5800 string=0x00000000002A5804 "K"
 *   insn=0x00000000002A5804 string=0x00000000002A5808 "+"
 *   insn=0x00000000002A580C string=0x00000000002A5810 "_"
 *   insn=0x00000000002A5824 string=0x00000000002A5828 "`"
 *   insn=0x00000000002A5828 string=0x00000000002A582C "."
 *   insn=0x00000000002A5828 string=0x00000000002A5854 "@"
 *   insn=0x00000000002A5830 string=0x00000000002A5834 "K"
 *   insn=0x00000000002A5834 string=0x00000000002A5838 "+"
 *   insn=0x00000000002A5838 string=0x00000000002A583C "_"
 *   insn=0x00000000002A5854 string=0x00000000002A5858 ""
 *   insn=0x00000000002A5858 string=0x00000000002A585C ""
 *   insn=0x00000000002A585C string=0x00000000002A5860 "!"
 *   insn=0x00000000002A5860 string=0x00000000002A5864 ""
 *   insn=0x00000000002A5864 string=0x00000000002A5868 ""
 *   insn=0x00000000002A5878 string=0x00000000002A587C "\n""
 *   insn=0x00000000002A587C string=0x00000000002A5880 "J"
 *   insn=0x00000000002A5884 string=0x00000000002A5888 "(a"
 *   insn=0x00000000002A5894 string=0x00000000002A5898 "J=G"
 *   insn=0x00000000002A5898 string=0x00000000002A589C ")!"
 *   insn=0x00000000002A58A0 string=0x00000000002A58A4 "*"
 *   insn=0x00000000002A58A0 string=0x00000000002A58D0 "*"
 *   insn=0x00000000002A58A4 string=0x00000000002A58A8 "K"
 *   insn=0x00000000002A58A8 string=0x00000000002A58AC "+"
 *   insn=0x00000000002A58B0 string=0x00000000002A58B4 "_"
 *   insn=0x00000000002A58B4 string=0x00000000002A58B8 "l"
 *   insn=0x00000000002A58D0 string=0x00000000002A58D4 "K"
 *   insn=0x00000000002A58D4 string=0x00000000002A58D8 "+"
 *   insn=0x00000000002A58D8 string=0x00000000002A58DC "_"
 *   insn=0x00000000002A58E8 string=0x00000000002A58EC "<@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleComponent::SetValueForBindedProperty(Caver::ParticleComponent *this, int a2, float **a3)
{
  void *v5; // x0
  void *v6; // x0
  __int64 v7; // x8
  _DWORD *v8; // x0
  int v9; // w8
  __int64 v10; // x8
  float v11; // s1
  float v12; // s2
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s1
  float v17; // s0
  __int64 v18; // x8
  float v19; // s1
  float v20; // s2
  float v21; // s1
  __int64 v22; // x0
  int v23; // w8
  unsigned int *v24; // x8
  int v25; // w9
  unsigned int *v26; // x8
  int v27; // w9
  __int64 v28; // [xsp+0h] [xbp-40h] BYREF
  __int64 v29; // [xsp+8h] [xbp-38h]
  __int64 v30; // [xsp+18h] [xbp-28h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 != 1 )
  {
    if ( a2 )
    {
      Caver::Component::SetValueForBindedProperty(this, a2, (const Caver::BindingValue *)a3);
      return;
    }
    Caver::TextureLibrary::sharedLibrary(this);
    sub_56A528(&v28, a3[1]);
    Caver::TextureLibrary::TextureForName();
    v5 = (void *)(v28 - 24);
    if ( (__int64 *)(v28 - 24) == &qword_6FD2E0 )
      goto LABEL_4;
    v24 = (unsigned int *)(v28 - 8);
    if ( &pthread_create )
    {
      do
        v25 = __ldaxr(v24);
      while ( __stlxr(v25 - 1, v24) );
    }
    else
    {
      v25 = (*v24)--;
    }
    if ( v25 > 0 )
    {
LABEL_4:
      if ( !v29 )
        return;
    }
    else
    {
      operator delete(v5);
      if ( !v29 )
        return;
    }
    sub_56A528(&v28, a3[1]);
    sub_56A6A8((char *)this + 112);
    v6 = (void *)(v28 - 24);
    if ( (__int64 *)(v28 - 24) == &qword_6FD2E0 )
      goto LABEL_6;
    v26 = (unsigned int *)(v28 - 8);
    if ( &pthread_create )
    {
      do
        v27 = __ldaxr(v26);
      while ( __stlxr(v27 - 1, v26) );
    }
    else
    {
      v27 = (*v26)--;
    }
    if ( v27 > 0 )
    {
LABEL_6:
      v7 = v29;
      if ( !v29 )
        goto LABEL_8;
    }
    else
    {
      operator delete(v6);
      v7 = v29;
      if ( !v29 )
      {
LABEL_8:
        v8 = (_DWORD *)*((_QWORD *)this + 15);
        *((_QWORD *)this + 15) = v7;
        if ( v8 )
        {
          v9 = v8[2] - 1;
          v8[2] = v9;
          if ( !v9 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
        }
        if ( *((float *)this + 32) < 0.01 )
        {
          v10 = *((_QWORD *)this + 15);
          v11 = *(float *)(v10 + 84);
          v12 = *(float *)(v10 + 88);
          v13 = v11 <= v12 ? *(float *)(v10 + 88) : *(float *)(v10 + 84);
          *((float *)this + 32) = v13;
          if ( v10 )
          {
            v14 = v11 / v12;
            if ( v14 <= 1.0 )
            {
              v16 = v13 * v14;
            }
            else
            {
              v15 = v13 / v14;
              v16 = v13;
              v13 = v15;
            }
            *((float *)this + 33) = v16;
            *((float *)this + 34) = v13;
          }
        }
        v22 = v29;
        if ( v29 )
        {
          v23 = *(_DWORD *)(v29 + 8) - 1;
          *(_DWORD *)(v29 + 8) = v23;
          if ( !v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        }
        return;
      }
    }
    ++*(_DWORD *)(v7 + 8);
    goto LABEL_8;
  }
  v17 = *a3[1];
  v18 = *((_QWORD *)this + 15);
  *((float *)this + 32) = v17;
  if ( v18 )
  {
    v19 = *(float *)(v18 + 84) / *(float *)(v18 + 88);
    if ( v19 <= 1.0 )
    {
      v21 = v17 * v19;
    }
    else
    {
      v20 = v17 / v19;
      v21 = v17;
      v17 = v20;
    }
    *((float *)this + 33) = v21;
    *((float *)this + 34) = v17;
  }
}

