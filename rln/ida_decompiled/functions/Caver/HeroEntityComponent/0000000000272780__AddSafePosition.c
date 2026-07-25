/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000272780
 * Mangled: _ZN5Caver19HeroEntityComponent15AddSafePositionEv
 * Demangled: Caver::HeroEntityComponent::AddSafePosition(void)
 *
 * Callers: 2
 *   0x0000000000203270  Caver::HeroEntityComponent::AddSafePosition(void)
 *   0x000000000027267C  Caver::HeroEntityComponent::Prepare(void)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F57E0  Caver::PortalComponent::Deactivate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC070  Caver::EntityComponent::Update(float)
 *   0x00000000001FC650  Caver::Rectangle::DistanceFromPointSquared(Caver::Vector2 const&)
 *   0x0000000000202D40  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_reallocate_map(ulong,bool)
 *   0x0000000000203090  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_erase(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 161
 *   insn=0x00000000002727A0 string=0x00000000002727A4 "\"
 *   insn=0x00000000002727AC string=0x00000000002727B0 "i"
 *   insn=0x00000000002727B4 string=0x00000000002727B8 "j"
 *   insn=0x00000000002727B8 string=0x00000000002727BC "h"
 *   insn=0x00000000002727C0 string=0x00000000002727C4 "_"
 *   insn=0x00000000002727C8 string=0x00000000002727CC "k"
 *   insn=0x00000000002727C8 string=0x0000000000272A88 "h"
 *   insn=0x00000000002727CC string=0x00000000002727D0 "m&Z"
 *   insn=0x00000000002727D0 string=0x00000000002727D4 "l"
 *   insn=0x00000000002727D8 string=0x00000000002727E0 "k"
 *   insn=0x00000000002727E0 string=0x00000000002727E4 "J"
 *   insn=0x00000000002727E8 string=0x00000000002727EC "m"
 *   insn=0x00000000002727EC string=0x00000000002727F0 "J"
 *   insn=0x00000000002727F8 string=0x00000000002727FC "K}"
 *   insn=0x0000000000272800 string=0x0000000000272804 "M"
 *   insn=0x0000000000272814 string=0x00000000002729AC "ub"
 *   insn=0x0000000000272820 string=0x0000000000583944 "\n"
 *   insn=0x0000000000272828 string=0x000000000027282C "n"
 *   insn=0x000000000027282C string=0x0000000000272830 ""
 *   insn=0x0000000000272838 string=0x000000000027283C "k"
 *   insn=0x0000000000272840 string=0x0000000000272844 "ub"
 *   insn=0x0000000000272844 string=0x0000000000272848 "yU"
 *   insn=0x0000000000272850 string=0x0000000000272854 "|"
 *   insn=0x0000000000272864 string=0x0000000000272868 "Z"
 *   insn=0x0000000000272868 string=0x000000000027286C "{"
 *   insn=0x0000000000272874 string=0x0000000000272878 "\n"
 *   insn=0x0000000000272878 string=0x000000000027287C "J"
 *   insn=0x000000000027287C string=0x0000000000272880 "J}"
 *   insn=0x0000000000272880 string=0x0000000000272884 "K"
 *   insn=0x0000000000272884 string=0x0000000000272888 "k5"
 *   insn=0x0000000000272890 string=0x0000000000272894 ","
 *   insn=0x0000000000272894 string=0x00000000002728B8 "l}"
 *   insn=0x000000000027289C string=0x00000000002728A0 ""
 *   insn=0x00000000002728A0 string=0x00000000002728A4 "="
 *   insn=0x00000000002728A4 string=0x0000000000272998 "h"
 *   insn=0x00000000002728B4 string=0x00000000002728C0 "-yl"
 *   insn=0x00000000002728C8 string=0x00000000002728CC "L"
 *   insn=0x00000000002728F0 string=0x00000000002728F4 "!"
 *   insn=0x00000000002728F8 string=0x00000000002728FC "!"
 *   insn=0x0000000000272900 string=0x0000000000272904 "!"
 *   insn=0x0000000000272934 string=0x0000000000272938 ""
 *   insn=0x0000000000272934 string=0x0000000000272950 "h}"
 *   insn=0x0000000000272940 string=0x0000000000272944 "}"
 *   insn=0x000000000027294C string=0x0000000000272958 ")"
 *   insn=0x0000000000272950 string=0x0000000000272954 ""
 *   insn=0x0000000000272958 string=0x000000000027295C "+"
 *   insn=0x0000000000272960 string=0x0000000000272964 ""
 *   insn=0x0000000000272964 string=0x0000000000272968 "H"
 *   insn=0x0000000000272968 string=0x000000000027296C "-"
 *   insn=0x000000000027296C string=0x0000000000272970 "!"
 *   insn=0x0000000000272974 string=0x0000000000272978 "("
 *   insn=0x0000000000272984 string=0x0000000000272988 ""
 *   insn=0x0000000000272998 string=0x000000000027299C "_;"
 *   insn=0x000000000027299C string=0x00000000002729A0 "!"
 *   insn=0x00000000002729A0 string=0x0000000000272864 "i"
 *   insn=0x00000000002729BC string=0x00000000002729C8 "k"
 *   insn=0x00000000002729C0 string=0x00000000002729C4 "h"
 *   insn=0x00000000002729C8 string=0x00000000002729CC "l"
 *   insn=0x00000000002729CC string=0x00000000002729D0 "m"
 *   insn=0x00000000002729D0 string=0x00000000002729D4 "i"
 *   insn=0x00000000002729D4 string=0x00000000002729D8 "k"
 *   insn=0x00000000002729D8 string=0x00000000002729DC "L"
 *   insn=0x00000000002729E0 string=0x00000000002729E4 "k"
 *   insn=0x00000000002729E8 string=0x00000000002729EC "k1"
 *   insn=0x00000000002729EC string=0x00000000002729F0 ","
 *   insn=0x00000000002729F8 string=0x00000000002729FC "k1"
 *   insn=0x0000000000272A00 string=0x0000000000272A04 "#"
 *   insn=0x0000000000272A08 string=0x0000000000272A0C ")"
 *   insn=0x0000000000272A10 string=0x0000000000272A14 "`"
 *   insn=0x0000000000272A14 string=0x0000000000272A18 "@"
 *   insn=0x0000000000272A18 string=0x0000000000272A1C "\t@"
 *   insn=0x0000000000272A18 string=0x00000000002729C0 ""
 *   insn=0x0000000000272A1C string=0x0000000000272A20 ")"
 *   insn=0x0000000000272A20 string=0x0000000000272A24 "\t"
 *   insn=0x0000000000272A28 string=0x0000000000272A2C ""
 *   insn=0x0000000000272A2C string=0x0000000000272A30 ""
 *   insn=0x0000000000272A34 string=0x0000000000272A38 "h"
 *   insn=0x0000000000272A40 string=0x0000000000272A44 "@"
 *   insn=0x0000000000272A44 string=0x0000000000272A48 ""
 *   insn=0x0000000000272A48 string=0x0000000000272A4C ""
 *   insn=0x0000000000272A50 string=0x0000000000272A54 ""
 *   insn=0x0000000000272A54 string=0x0000000000272A58 ""
 *   insn=0x0000000000272A64 string=0x0000000000272A68 "h"
 *   insn=0x0000000000272A64 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000272A68 string=0x0000000000272A6C "\t!"
 *   insn=0x0000000000272A6C string=0x0000000000272A70 "i"
 *   insn=0x0000000000272A70 string=0x0000000000272A74 ""
 *   insn=0x0000000000272A74 string=0x0000000000272A78 "\t"
 *   insn=0x0000000000272A78 string=0x0000000000272A7C "h""
 *   insn=0x0000000000272A7C string=0x0000000000272A80 "i"
 *   insn=0x0000000000272A88 string=0x0000000000272A8C "uN@"
 *   insn=0x0000000000272A90 string=0x0000000000272A94 "q@"
 *   insn=0x0000000000272A98 string=0x0000000000272AB8 "h"
 *   insn=0x0000000000272AA8 string=0x0000000000272AAC ""
 *   insn=0x0000000000272AB8 string=0x0000000000272ABC ""
 *   insn=0x0000000000272ABC string=0x0000000000272AC0 "_"
 *   insn=0x0000000000272AC4 string=0x0000000000272AC8 "[i"
 *   insn=0x0000000000272AC4 string=0x0000000000272B00 "h"
 *   insn=0x0000000000272AC8 string=0x0000000000272ACC "Y\t"
 *   insn=0x0000000000272ACC string=0x0000000000272AD0 "U\t"
 *   insn=0x0000000000272AD4 string=0x0000000000272AE4 "H"
 *   insn=0x0000000000272AD8 string=0x0000000000272ADC ""
 *   insn=0x0000000000272AE4 string=0x0000000000272AE8 "V]"
 *   insn=0x0000000000272AE8 string=0x0000000000272AEC "Ta"
 *   insn=0x0000000000272AEC string=0x0000000000272AF0 "h"
 *   insn=0x0000000000272AF4 string=0x0000000000272AF8 "u"
 *   insn=0x0000000000272AF8 string=0x0000000000272AFC "*"
 *   insn=0x0000000000272B00 string=0x0000000000272B04 "i*X"
 *   insn=0x0000000000272B04 string=0x0000000000272B08 ""
 *   insn=0x0000000000272B08 string=0x0000000000272B0C "H"
 *   insn=0x0000000000272B2C string=0x0000000000272B30 "h"
 *   insn=0x0000000000272B2C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000272B34 string=0x0000000000272B38 "h"
 *   insn=0x0000000000272B38 string=0x0000000000272B3C "i"
 *   insn=0x0000000000272B4C string=0x0000000000272B50 ")"
 *   insn=0x0000000000272B5C string=0x0000000000272B60 "h"
 *   insn=0x0000000000272B60 string=0x0000000000272B64 "\t!"
 *   insn=0x0000000000272B64 string=0x0000000000272B68 "i"
 *   insn=0x0000000000272B68 string=0x0000000000272B6C ""
 *   insn=0x0000000000272B6C string=0x0000000000272B70 "h""
 *   insn=0x0000000000272B70 string=0x0000000000272B74 ""
 *   insn=0x0000000000272B74 string=0x0000000000272B78 "h"
 *   insn=0x0000000000272B7C string=0x0000000000272B80 "5"
 *   insn=0x0000000000272B84 string=0x0000000000272B88 ""
 *   insn=0x0000000000272B98 string=0x0000000000272B9C ""
 *   insn=0x0000000000272BAC string=0x0000000000272BB0 "A"
 *   insn=0x0000000000272BD8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000272BDC string=0x0000000000272BE0 "5"
 *   insn=0x0000000000272BE4 string=0x0000000000272BE8 ""
 *   insn=0x0000000000272BF4 string=0x0000000000272BF8 ""
 *   insn=0x0000000000272C04 string=0x0000000000272C08 "/;"
 *   insn=0x0000000000272C1C string=0x0000000000272C20 ""
 *   insn=0x0000000000272C28 string=0x0000000000272C2C "`zA"
 *   insn=0x0000000000272C28 string=0x00000000001FC070 "0'"
 *   insn=0x0000000000272C2C string=0x0000000000272C30 "`"
 *   insn=0x0000000000272C34 string=0x0000000000272C38 "`z"
 *   insn=0x0000000000272C3C string=0x0000000000272C40 ""
 *   insn=0x0000000000272C3C string=0x0000000000272C50 "`"
 *   insn=0x0000000000272C44 string=0x0000000000272C48 "e@"
 *   insn=0x0000000000272C54 string=0x0000000000272C58 ""
 *   insn=0x0000000000272C54 string=0x0000000000272C68 "h"
 *   insn=0x0000000000272C5C string=0x0000000000272C60 "e@"
 *   insn=0x0000000000272C6C string=0x0000000000272C70 "h"
 *   insn=0x0000000000272C70 string=0x0000000000272C74 "i"
 *   insn=0x0000000000272C78 string=0x0000000000272C7C "!"
 *   insn=0x0000000000272C7C string=0x0000000000272C80 "t&"
 *   insn=0x0000000000272C80 string=0x00000000001FC650 "0'"
 *   insn=0x0000000000272C90 string=0x0000000000272C94 "`"
 *   insn=0x0000000000272C98 string=0x0000000000272C9C "`"
 *   insn=0x0000000000272C98 string=0x00000000001F57E0 "P'"
 *   insn=0x0000000000272CA4 string=0x0000000000272CA8 "@"
 *   insn=0x0000000000272CA4 string=0x0000000000272CC4 "`"
 *   insn=0x0000000000272CA8 string=0x0000000000272CAC ""
 *   insn=0x0000000000272CAC string=0x0000000000272CB0 ""
 *   insn=0x0000000000272CB4 string=0x0000000000272CB8 ""
 *   insn=0x0000000000272CB8 string=0x0000000000272CBC ""
 *   insn=0x0000000000272CCC string=0x0000000000272CD0 "@"
 *   insn=0x0000000000272CD0 string=0x0000000000272CD4 ""
 *   insn=0x0000000000272CD4 string=0x0000000000272CD8 ""
 *   insn=0x0000000000272CDC string=0x0000000000272CF0 ""
 *   insn=0x0000000000272D00 string=0x0000000000272D04 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HeroEntityComponent::AddSafePosition(Caver::HeroEntityComponent *this)
{
  int v1; // w20
  int v2; // w22
  int v3; // w23
  int v4; // w24
  __int64 v6; // x10
  __int64 v7; // x8
  __int64 v8; // x9
  unsigned __int64 v9; // x11
  __int64 v10; // x10
  void **v11; // x21
  unsigned __int64 v12; // x26
  __int64 v13; // x27
  unsigned __int64 i; // x28
  unsigned __int64 v15; // x10
  __int64 v16; // x11
  __int64 v17; // x12
  __int64 v18; // x13
  unsigned __int64 v19; // x12
  float32x2_t v20; // d1
  unsigned __int64 v21; // d1
  __int64 v22; // x9
  _DWORD *v23; // x0
  int v24; // w9
  int v25; // w8
  __int64 *v26; // x9
  __int64 v27; // x9
  _DWORD *v28; // x8
  _DWORD *v29; // x21
  int v30; // w25
  int v31; // w26
  int v32; // w27
  __int64 v33; // x8
  __int64 *v34; // x9
  __int64 v35; // x8
  int v36; // w8

  _ReadStatusReg(TPIDR_EL0);
  v6 = *((_QWORD *)this + 54);
  v7 = *((_QWORD *)this + 50);
  if ( v6 != v7 )
  {
    v8 = *((_QWORD *)this + 53);
    v3 = -858993459;
    v9 = 0xCCCCCCCCCCCCCCCDLL * ((v6 - *((_QWORD *)this + 55)) >> 3);
    v10 = 4 * (((*((_QWORD *)this + 57) - v8) >> 2) + ((*((_QWORD *)this + 57) - v8) >> 3));
    if ( v10 + v9 - 0x3333333333333333LL * ((*((_QWORD *)this + 52) - v7) >> 3) != 13 )
    {
      v4 = 12;
      v11 = (void **)((char *)this + 408);
      v12 = v9 - 0x3333333333333333LL * ((*((_QWORD *)this + 52) - v7) >> 3) + v10;
      v13 = 40 * (v10 + v9 - 0x3333333333333333LL * ((*((_QWORD *)this + 52) - v7) >> 3) - 13);
      for ( i = 12 - v9 - 0xCCCCCCCCCCCCCCCDLL * ((*((_QWORD *)this + 52) - v7) >> 3) - v10; ; ++i )
      {
        v15 = 0xCCCCCCCCCCCCCCCDLL * ((v7 - (__int64)*v11) >> 3);
        v16 = v12 - 0x3333333333333333LL * ((v7 - (__int64)*v11) >> 3) - 13;
        if ( v16 < 0 )
        {
          v19 = ~((i - v15) / 0xC);
        }
        else
        {
          if ( v16 <= 11 )
          {
            v17 = v7 + v13;
            v18 = *(_QWORD *)(v7 + v13 + 16);
            if ( !v18 )
              goto LABEL_15;
            goto LABEL_12;
          }
          v19 = v16 / 0xCuLL;
        }
        v17 = *(_QWORD *)(v8 + 8 * v19) + 40 * (v12 + v15 - 12 * v19) - 520;
        v18 = *(_QWORD *)(v17 + 16);
        if ( !v18 )
          goto LABEL_15;
LABEL_12:
        v20.n64_u64[0] = vsub_f32(*(float32x2_t *)(v18 + 116), *(float32x2_t *)(v17 + 28)).n64_u64[0];
        v21 = vmul_f32(v20, v20).n64_u64[0];
        if ( (float)((float)((float)((float)(*(float *)(v18 + 112) - *(float *)(v17 + 24))
                                   * (float)(*(float *)(v18 + 112) - *(float *)(v17 + 24)))
                           + *(float *)&v21)
                   + *((float *)&v21 + 1)) > 0.0001
          || fabsf(*(float *)(v17 + 36) - *(float *)(v18 + 128)) > 0.01 )
        {
          std::deque<Caver::HeroEntityComponent::SafePosition>::_M_erase();
        }
LABEL_15:
        v7 = *((_QWORD *)this + 50);
        if ( v12 == 14 )
          goto LABEL_18;
        v8 = *((_QWORD *)this + 53);
        --v12;
        v13 -= 40;
      }
    }
    v11 = (void **)((char *)this + 408);
LABEL_18:
    v1 = 12;
    v2 = -858993459;
    while ( 1 )
    {
      v6 = *((_QWORD *)this + 54);
      v22 = *((_QWORD *)this + 52);
      if ( 0xCCCCCCCCCCCCCCCDLL * ((v6 - *((_QWORD *)this + 55)) >> 3)
         + 12 * ((__int64)(*((_QWORD *)this + 57) - *((_QWORD *)this + 53)) >> 3)
         - 0x3333333333333333LL * ((v22 - v7) >> 3)
         - 12 < 6 )
        break;
      v23 = *(_DWORD **)(v7 + 16);
      if ( v7 == v22 - 40 )
      {
        if ( v23 )
        {
          v25 = v23[2] - 1;
          v23[2] = v25;
          if ( !v25 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 8LL))(v23);
        }
        operator delete(*v11);
        v26 = (__int64 *)(*((_QWORD *)this + 53) + 8LL);
        *((_QWORD *)this + 53) = v26;
        v7 = *v26;
        v27 = *v26 + 480;
        *((_QWORD *)this + 50) = v7;
        *((_QWORD *)this + 51) = v7;
        *((_QWORD *)this + 52) = v27;
      }
      else
      {
        if ( v23 )
        {
          v24 = v23[2] - 1;
          v23[2] = v24;
          if ( !v24 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 8LL))(v23);
            v7 = *((_QWORD *)this + 50);
          }
        }
        v7 += 40;
        *((_QWORD *)this + 50) = v7;
      }
    }
  }
  v28 = (_DWORD *)*((_QWORD *)this + 5);
  v29 = (_DWORD *)*((_QWORD *)this + 19);
  v31 = v28[29];
  v30 = v28[30];
  v32 = v28[28];
  if ( v29 )
  {
    v3 = v29[29];
    v1 = v29[30];
    v2 = v29[28];
    v4 = v29[32];
    ++v29[2];
  }
  if ( v6 != *((_QWORD *)this + 56) - 40LL )
  {
    *(_DWORD *)v6 = v32;
    *(_DWORD *)(v6 + 4) = v31;
    *(_DWORD *)(v6 + 8) = v30;
    *(_QWORD *)(v6 + 16) = v29;
    if ( v29 )
      ++v29[2];
    *(_DWORD *)(v6 + 24) = v2;
    *(_DWORD *)(v6 + 28) = v3;
    *(_DWORD *)(v6 + 32) = v1;
    *(_DWORD *)(v6 + 36) = v4;
    *((_QWORD *)this + 54) = v6 + 40;
    *((_DWORD *)this + 94) = 0;
    if ( !v29 )
      return;
LABEL_41:
    v36 = v29[2] - 1;
    v29[2] = v36;
    if ( !v36 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v29 + 8LL))(v29);
    return;
  }
  if ( (unsigned __int64)(*((_QWORD *)this + 49) - ((__int64)(*((_QWORD *)this + 57) - *((_QWORD *)this + 48)) >> 3)) <= 1 )
    std::deque<Caver::HeroEntityComponent::SafePosition>::_M_reallocate_map();
  *(_QWORD *)(*((_QWORD *)this + 57) + 8LL) = operator new(0x1E0u);
  v33 = *((_QWORD *)this + 54);
  *(_DWORD *)v33 = v32;
  *(_DWORD *)(v33 + 4) = v31;
  *(_DWORD *)(v33 + 8) = v30;
  *(_QWORD *)(v33 + 16) = v29;
  if ( v29 )
    ++v29[2];
  *(_DWORD *)(v33 + 24) = v2;
  *(_DWORD *)(v33 + 28) = v3;
  *(_DWORD *)(v33 + 32) = v1;
  *(_DWORD *)(v33 + 36) = v4;
  v34 = (__int64 *)(*((_QWORD *)this + 57) + 8LL);
  *((_QWORD *)this + 57) = v34;
  v35 = *v34;
  *((_QWORD *)this + 54) = *v34;
  *((_QWORD *)this + 55) = v35;
  *((_QWORD *)this + 56) = v35 + 480;
  *((_DWORD *)this + 94) = 0;
  if ( v29 )
    goto LABEL_41;
}

