/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D3458
 * Mangled: _ZNSt6vectorIN5Caver22RenderingProgramShader15UniformVariableESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::RenderingProgramShader::UniformVariable*,std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>>,Caver::RenderingProgramShader::UniformVariable const&)
 *
 * Callers: 1
 *   0x00000000001FF990  std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::RenderingProgramShader::UniformVariable*,std::vector<Caver::RenderingProgramShader::UniformVariable,std::allocator<Caver::RenderingProgramShader::UniformVariable>>>,Caver::RenderingProgramShader::UniformVariable const&)
 *
 * Callees: 14
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x00000000001FECB0  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000565294  sub_565294
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 107
 *   insn=0x00000000004D3474 string=0x00000000004D3478 "X"
 *   insn=0x00000000004D3478 string=0x00000000004D347C ""
 *   insn=0x00000000004D3490 string=0x00000000004D3494 "?"
 *   insn=0x00000000004D3498 string=0x00000000004D349C "("
 *   insn=0x00000000004D349C string=0x00000000004D34A0 " !"
 *   insn=0x00000000004D34A0 string=0x00000000004D34A4 "!!"
 *   insn=0x00000000004D34A4 string=0x00000000004D34A8 "("
 *   insn=0x00000000004D34B4 string=0x00000000004D34B8 "3!"
 *   insn=0x00000000004D34BC string=0x00000000004D34C0 "A"
 *   insn=0x00000000004D34D8 string=0x00000000004D34DC "\t"
 *   insn=0x00000000004D34DC string=0x00000000004D34E0 ")"
 *   insn=0x00000000004D34E0 string=0x00000000004D34E4 "?"
 *   insn=0x00000000004D34E8 string=0x00000000004D34EC ")"
 *   insn=0x00000000004D34EC string=0x00000000004D34F0 "6"
 *   insn=0x00000000004D34F4 string=0x00000000004D34F8 ""
 *   insn=0x00000000004D34FC string=0x00000000004D3500 ""
 *   insn=0x00000000004D3504 string=0x00000000004D3508 "h\"
 *   insn=0x00000000004D3528 string=0x00000000004D352C "_\"
 *   insn=0x00000000004D3534 string=0x00000000004D3538 ")"
 *   insn=0x00000000004D3544 string=0x00000000004D3694 ""
 *   insn=0x00000000004D3548 string=0x00000000004D354C ")=G"
 *   insn=0x00000000004D354C string=0x00000000004D3550 "!"
 *   insn=0x00000000004D3554 string=0x00000000004D3558 "\t"
 *   insn=0x00000000004D3554 string=0x00000000004D36C4 "\t"
 *   insn=0x00000000004D3558 string=0x00000000004D355C "*"
 *   insn=0x00000000004D355C string=0x00000000004D3560 "\n"
 *   insn=0x00000000004D3564 string=0x00000000004D3568 "Z"
 *   insn=0x00000000004D3568 string=0x00000000004D36D0 "?"
 *   insn=0x00000000004D356C string=0x00000000004D3570 ")"
 *   insn=0x00000000004D3570 string=0x00000000004D3574 ")"
 *   insn=0x00000000004D3574 string=0x00000000004D3578 "*"
 *   insn=0x00000000004D3578 string=0x00000000004D357C "I"
 *   insn=0x00000000004D357C string=0x00000000004D3580 "+"
 *   insn=0x00000000004D358C string=0x00000000004D3590 "J"
 *   insn=0x00000000004D3590 string=0x00000000004D3594 "_"
 *   insn=0x00000000004D3598 string=0x00000000004D359C "Y"
 *   insn=0x00000000004D359C string=0x00000000004D35A0 ")"
 *   insn=0x00000000004D35A0 string=0x00000000004D35A4 ")\n"
 *   insn=0x00000000004D35A8 string=0x00000000004D35AC " "
 *   insn=0x00000000004D35B0 string=0x00000000004D35B4 ""
 *   insn=0x00000000004D35B4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004D35BC string=0x00000000004D35C0 "`"
 *   insn=0x00000000004D35C4 string=0x00000000004D35C8 ""
 *   insn=0x00000000004D3608 string=0x00000000004D367C "v"
 *   insn=0x00000000004D3610 string=0x00000000004D3614 "Z"
 *   insn=0x00000000004D3614 string=0x00000000004D3618 "{?G"
 *   insn=0x00000000004D3624 string=0x00000000004D3628 "\t"
 *   insn=0x00000000004D3624 string=0x00000000004D363C "\t"
 *   insn=0x00000000004D3628 string=0x00000000004D362C "*"
 *   insn=0x00000000004D362C string=0x00000000004D3630 "\n"
 *   insn=0x00000000004D3638 string=0x00000000004D3648 "?"
 *   insn=0x00000000004D363C string=0x00000000004D3640 "*"
 *   insn=0x00000000004D3640 string=0x00000000004D3644 "\n"
 *   insn=0x00000000004D3650 string=0x00000000004D3654 "T["
 *   insn=0x00000000004D3668 string=0x00000000004D3620 "!"
 *   insn=0x00000000004D3670 string=0x00000000004D3674 "A"
 *   insn=0x00000000004D367C string=0x00000000004D3688 "h"
 *   insn=0x00000000004D3680 string=0x00000000004D3684 ""
 *   insn=0x00000000004D3684 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004D369C string=0x00000000004D36A0 "!"
 *   insn=0x00000000004D36C4 string=0x00000000004D36C8 "*"
 *   insn=0x00000000004D36C8 string=0x00000000004D36CC "\n"
 *   insn=0x00000000004D36D8 string=0x00000000004D36DC "2["
 *   insn=0x00000000004D36E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004D36F0 string=0x00000000004D36F4 "V"
 *   insn=0x00000000004D36F0 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000004D36F4 string=0x00000000004D377C "h"
 *   insn=0x00000000004D36F8 string=0x00000000004D36FC "`"
 *   insn=0x00000000004D371C string=0x00000000004D3720 "\t"
 *   insn=0x00000000004D371C string=0x00000000004D373C "\t"
 *   insn=0x00000000004D3720 string=0x00000000004D3724 "*"
 *   insn=0x00000000004D3724 string=0x00000000004D3728 "\n"
 *   insn=0x00000000004D372C string=0x00000000004D3730 "?"
 *   insn=0x00000000004D373C string=0x00000000004D3740 "*"
 *   insn=0x00000000004D3740 string=0x00000000004D3744 "\n"
 *   insn=0x00000000004D3744 string=0x00000000004D3748 "?"
 *   insn=0x00000000004D3768 string=0x00000000004D3718 "!"
 *   insn=0x00000000004D3770 string=0x00000000004D3774 "A"
 *   insn=0x00000000004D377C string=0x00000000004D3780 ""
 *   insn=0x00000000004D3784 string=0x00000000004D3788 ")"
 *   insn=0x00000000004D3798 string=0x00000000004D379C ")=G"
 *   insn=0x00000000004D379C string=0x00000000004D37A0 "!"
 *   insn=0x00000000004D37A4 string=0x00000000004D37A8 "\t"
 *   insn=0x00000000004D37A4 string=0x00000000004D37D4 "\t"
 *   insn=0x00000000004D37A8 string=0x00000000004D37AC "*"
 *   insn=0x00000000004D37AC string=0x00000000004D37B0 "\n"
 *   insn=0x00000000004D37B4 string=0x00000000004D37B8 "?"
 *   insn=0x00000000004D37B8 string=0x00000000004D37BC "l"
 *   insn=0x00000000004D37D4 string=0x00000000004D37D8 "*"
 *   insn=0x00000000004D37D8 string=0x00000000004D37DC "\n"
 *   insn=0x00000000004D37DC string=0x00000000004D37E0 "?"
 *   insn=0x00000000004D37EC string=0x00000000004D37F0 "h"
 *   insn=0x00000000004D37F0 string=0x00000000001FD590 "0'"
 *   insn=0x00000000004D3800 string=0x00000000004D3804 ")"
 *   insn=0x00000000004D3818 string=0x00000000004D381C ")=G"
 *   insn=0x00000000004D381C string=0x00000000004D3820 "!"
 *   insn=0x00000000004D3820 string=0x00000000004D3824 "i"
 *   insn=0x00000000004D3824 string=0x00000000004D3828 "\t"
 *   insn=0x00000000004D3824 string=0x00000000004D3850 "\t"
 *   insn=0x00000000004D3828 string=0x00000000004D382C "*"
 *   insn=0x00000000004D382C string=0x00000000004D3830 "\n"
 *   insn=0x00000000004D3834 string=0x00000000004D3838 "?"
 *   insn=0x00000000004D3838 string=0x00000000004D383C "l"
 *   insn=0x00000000004D3850 string=0x00000000004D3854 "*"
 *   insn=0x00000000004D3854 string=0x00000000004D3858 "\n"
 *   insn=0x00000000004D3858 string=0x00000000004D385C "?"
 *   insn=0x00000000004D385C string=0x00000000004D3860 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall std::vector<Caver::RenderingProgramShader::UniformVariable>::_M_insert_aux(
        __int64 *a1,
        _DWORD *a2,
        _DWORD *a3)
{
  _DWORD *v6; // x9
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x20
  void *v12; // x0
  unsigned int *v13; // x8
  int v14; // w9
  bool v15; // zf
  __int64 v16; // x9
  __int64 v17; // x9
  __int64 v18; // x10
  bool v19; // cf
  unsigned __int64 v20; // x9
  int v21; // w10
  unsigned __int64 v22; // x25
  __int64 v23; // x26
  __int64 v24; // x19
  _DWORD *v25; // x0
  __int64 v26; // x21
  _QWORD *v27; // x22
  _QWORD *v28; // x23
  unsigned int *v29; // x8
  int v30; // w9
  __int64 v31; // x8
  void *v32; // x0
  int v33; // [xsp+0h] [xbp-70h]
  _QWORD v34[3]; // [xsp+8h] [xbp-68h] BYREF

  v34[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (_DWORD *)a1[1];
  if ( v6 == (_DWORD *)a1[2] )
  {
    v16 = (__int64)v6 - *a1;
    v15 = v16 == 0;
    v17 = v16 >> 4;
    if ( v15 )
      v18 = 1;
    else
      v18 = v17;
    v19 = __CFADD__(v18, v17);
    v20 = v18 + v17;
    v21 = v19;
    if ( v21 | (v20 >> 60 != 0) )
      v22 = 0xFFFFFFFFFFFFFFFLL;
    else
      v22 = v20;
    if ( v22 >> 60 )
      sub_565294(a1, a2, a3);
    v23 = ((__int64)a2 - *a1) >> 4;
    v24 = operator new(16 * v22);
    v25 = (_DWORD *)(v24 + 16 * v23);
    *v25 = *a3;
    sub_56A528(v25 + 2, a3 + 2);
    std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>();
    v26 = std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>();
    v27 = (_QWORD *)*a1;
    v28 = (_QWORD *)a1[1];
    if ( (_QWORD *)*a1 != v28 )
    {
      do
      {
        v31 = v27[1];
        v32 = (void *)(v31 - 24);
        if ( (__int64 *)(v31 - 24) != &qword_6FD2E0 )
        {
          v29 = (unsigned int *)(v31 - 8);
          if ( &pthread_create )
          {
            do
              v30 = __ldaxr(v29);
            while ( __stlxr(v30 - 1, v29) );
          }
          else
          {
            v30 = (*v29)--;
          }
          if ( v30 <= 0 )
            operator delete(v32);
        }
        v27 += 2;
      }
      while ( v27 != v28 );
      v27 = (_QWORD *)*a1;
    }
    if ( v27 )
      operator delete(v27);
    *a1 = v24;
    a1[1] = v26;
    a1[2] = v24 + 16 * v22;
  }
  else
  {
    *v6 = *(v6 - 4);
    sub_56A528(v6 + 2, v6 - 2);
    a1[1] += 16;
    v33 = *a3;
    sub_56A528(v34, a3 + 2);
    v7 = a1[1];
    v8 = v7 - 32 - (_QWORD)a2;
    if ( v8 >= 1 )
    {
      v9 = ((unsigned __int64)v8 >> 4) + 1;
      v10 = v7 - 24;
      do
      {
        v11 = v10 - 16;
        *(_DWORD *)(v10 - 8) = *(_DWORD *)(v10 - 24);
        sub_56A6A8(v10);
        --v9;
        v10 = v11;
      }
      while ( v9 > 1 );
    }
    *a2 = v33;
    sub_56A6A8(a2 + 2);
    v12 = (void *)(v34[0] - 24LL);
    if ( (__int64 *)(v34[0] - 24LL) != &qword_6FD2E0 )
    {
      v13 = (unsigned int *)(v34[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
      }
      else
      {
        v14 = (*v13)--;
      }
      if ( v14 <= 0 )
        operator delete(v12);
    }
  }
}

