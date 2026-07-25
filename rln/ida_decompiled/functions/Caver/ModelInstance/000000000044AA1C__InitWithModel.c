/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000044AA1C
 * Mangled: _ZN5Caver13ModelInstance13InitWithModelERKN5boost10shared_ptrIKNS_5ModelEEE
 * Demangled: Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callers: 1
 *   0x00000000001F6170  Caver::ModelInstance::InitWithModel(boost::shared_ptr<Caver::Model const> const&)
 *
 * Callees: 13
 *   0x00000000001F4190  boost::checked_array_delete<boost::shared_ptr<Caver::MeshInstance>>(boost::shared_ptr<Caver::MeshInstance> *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7270  boost::detail::shared_count::shared_count<Caver::SkeletonInstance>(Caver::SkeletonInstance *)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBB70  Caver::SkeletonInstance::EvaluateMatrices(void)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FD710  Caver::SkeletonInstance::ExtractDataFromBuffer(Caver::FloatDataBuffer const*)
 *   0x00000000001FFE30  Caver::SkeletonInstance::InitWithSkeleton(boost::shared_ptr<Caver::Skeleton const> const&)
 *   0x0000000000200EA0  Caver::MeshInstance::InstanceWithMesh(boost::shared_ptr<Caver::Mesh> const&,bool)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 92
 *   insn=0x000000000044AA30 string=0x000000000044AA34 "V"
 *   insn=0x000000000044AA44 string=0x000000000044AA48 "i"@"
 *   insn=0x000000000044AA4C string=0x000000000044AA50 "\n"
 *   insn=0x000000000044AA50 string=0x000000000044AA54 "J"
 *   insn=0x000000000044AA54 string=0x000000000044AA58 "\n"
 *   insn=0x000000000044AA60 string=0x000000000044AA64 "5"
 *   insn=0x000000000044AA64 string=0x000000000044AAA8 "h"
 *   insn=0x000000000044AA68 string=0x000000000044AA6C ""
 *   insn=0x000000000044AA7C string=0x000000000044AA80 "\t@"
 *   insn=0x000000000044AA88 string=0x000000000044AA8C ""
 *   insn=0x000000000044AA9C string=0x000000000044AAA0 "@"
 *   insn=0x000000000044AAA8 string=0x000000000044AAAC "\t"
 *   insn=0x000000000044AAAC string=0x000000000044AAB0 "i"
 *   insn=0x000000000044AAB0 string=0x000000000044ABBC "\t"
 *   insn=0x000000000044AAB8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000044AAD8 string=0x00000000001F7270 "0'"
 *   insn=0x000000000044AB00 string=0x000000000044AB04 "5"
 *   insn=0x000000000044AB04 string=0x000000000044AB48 "h"
 *   insn=0x000000000044AB08 string=0x000000000044AB0C ""
 *   insn=0x000000000044AB1C string=0x000000000044AB20 "\t@"
 *   insn=0x000000000044AB28 string=0x000000000044AB2C ""
 *   insn=0x000000000044AB3C string=0x000000000044AB40 "@"
 *   insn=0x000000000044AB4C string=0x000000000044AB50 "\t!B"
 *   insn=0x000000000044AB58 string=0x000000000044AB5C "\t"
 *   insn=0x000000000044AB5C string=0x000000000044AB60 ")"
 *   insn=0x000000000044AB60 string=0x000000000044AB64 "\t"
 *   insn=0x000000000044AB70 string=0x000000000044AB74 "5"
 *   insn=0x000000000044AB74 string=0x000000000044ABB8 "h"
 *   insn=0x000000000044AB78 string=0x000000000044AB7C ""
 *   insn=0x000000000044AB8C string=0x000000000044AB90 "\t@"
 *   insn=0x000000000044AB98 string=0x000000000044AB9C ""
 *   insn=0x000000000044ABAC string=0x000000000044ABB0 "@"
 *   insn=0x000000000044ABCC string=0x000000000044ABD0 "\t"
 *   insn=0x000000000044ABDC string=0x000000000044ABE0 "h"
 *   insn=0x000000000044ABE4 string=0x000000000044ABE8 ")"
 *   insn=0x000000000044ABE8 string=0x000000000044ABEC "?"
 *   insn=0x000000000044ABF0 string=0x000000000044ABF4 "_"
 *   insn=0x000000000044ABF4 string=0x00000000001F8570 "0'"
 *   insn=0x000000000044AC08 string=0x000000000044AC0C ""
 *   insn=0x000000000044AC18 string=0x000000000044AC1C "\t"
 *   insn=0x000000000044AC1C string=0x00000000001FBC40 "0'"
 *   insn=0x000000000044AC24 string=0x000000000044AC28 "Z"
 *   insn=0x000000000044AC28 string=0x000000000044AC2C "h"
 *   insn=0x000000000044AC28 string=0x00000000001F4190 "P'"
 *   insn=0x000000000044AC2C string=0x000000000044AC30 "\t"
 *   insn=0x000000000044AC30 string=0x000000000044AC34 "I"
 *   insn=0x000000000044AC34 string=0x000000000044AC38 ")"
 *   insn=0x000000000044AC38 string=0x000000000044AC3C "?"
 *   insn=0x000000000044AC4C string=0x000000000044AC50 ""
 *   insn=0x000000000044AC50 string=0x000000000044AC54 "?"
 *   insn=0x000000000044AC70 string=0x000000000044AC74 ""
 *   insn=0x000000000044AC70 string=0x000000000044AC80 ")"
 *   insn=0x000000000044AC74 string=0x000000000044AC78 "k"
 *   insn=0x000000000044AC78 string=0x000000000044AC7C ""
 *   insn=0x000000000044AC80 string=0x000000000044AC84 "5"
 *   insn=0x000000000044AC84 string=0x000000000044AC88 "*!"
 *   insn=0x000000000044AC88 string=0x000000000044AC8C "5"
 *   insn=0x000000000044AC90 string=0x000000000044AC94 ""
 *   insn=0x000000000044ACA0 string=0x000000000044ACA4 "\t@"
 *   insn=0x000000000044ACB0 string=0x000000000044ACB4 ""
 *   insn=0x000000000044ACC0 string=0x000000000044ACC4 "@"
 *   insn=0x000000000044ACD0 string=0x000000000044ACD4 "5"
 *   insn=0x000000000044ACD4 string=0x000000000044AD18 "h"
 *   insn=0x000000000044ACD8 string=0x000000000044ACDC ""
 *   insn=0x000000000044ACEC string=0x000000000044ACF0 "\t@"
 *   insn=0x000000000044ACF8 string=0x000000000044ACFC ""
 *   insn=0x000000000044AD0C string=0x000000000044AD10 "@"
 *   insn=0x000000000044AD20 string=0x000000000044AD24 "\t"
 *   insn=0x000000000044AD24 string=0x000000000044AD28 "I"
 *   insn=0x000000000044AD28 string=0x000000000044AD2C ")"
 *   insn=0x000000000044AD44 string=0x000000000044AD60 "\"
 *   insn=0x000000000044AD60 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000044AD70 string=0x000000000044AD74 ""
 *   insn=0x000000000044AD78 string=0x000000000044AD7C "!"
 *   insn=0x000000000044AD80 string=0x000000000044AD84 "\t@"
 *   insn=0x000000000044AD90 string=0x000000000044AD94 ""
 *   insn=0x000000000044AD98 string=0x000000000044AD9C "!"
 *   insn=0x000000000044ADA0 string=0x000000000044ADA4 "@"
 *   insn=0x000000000044ADB8 string=0x000000000044ADBC "4"
 *   insn=0x000000000044ADC0 string=0x000000000044ADC4 ""
 *   insn=0x000000000044ADD0 string=0x000000000044ADD4 "\t@"
 *   insn=0x000000000044ADE0 string=0x000000000044ADE4 ""
 *   insn=0x000000000044ADF0 string=0x000000000044ADF4 "@"
 *   insn=0x000000000044AE04 string=0x000000000044AE08 "Q"
 *   insn=0x000000000044AE1C string=0x000000000044AE20 "`"
 *   insn=0x000000000044AE20 string=0x000000000044AE24 ";"
 *   insn=0x000000000044AE24 string=0x000000000044AE28 "`"
 *   insn=0x000000000044AE24 string=0x00000000001FD710 "0'"
 *   insn=0x000000000044AE28 string=0x000000000044AE2C "Q"
 *   insn=0x000000000044AE2C string=0x00000000001FBB70 "0'"
 *   insn=0x000000000044AE30 string=0x000000000044AE34 "hB"
 *   insn=0x000000000044AE34 string=0x000000000044AE38 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelInstance::InitWithModel(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x8
  __int64 v15; // x8
  __int64 v16; // x8
  __int64 v17; // x23
  unsigned __int64 v18; // x24
  unsigned __int64 v19; // x0
  unsigned __int64 *v20; // x0
  _QWORD *v21; // x21
  __int64 v22; // x23
  __int64 v23; // x24
  __int64 v24; // x9
  _QWORD *v25; // x9
  _QWORD *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  __int64 v31; // [xsp+28h] [xbp-48h]
  _QWORD *v32; // [xsp+28h] [xbp-48h]
  _QWORD *v33; // [xsp+30h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  v5 = *a2;
  v4 = a2[1];
  if ( v4 )
    ++*(_QWORD *)(v4 + 8);
  v6 = (_QWORD *)a1[1];
  *a1 = v5;
  a1[1] = v4;
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = *a2;
  if ( *(_QWORD *)(*a2 + 32LL) )
  {
    v10 = (_QWORD *)operator new(0x18u);
    v10[1] = 0;
    v10[2] = 0;
    *v10 = 0;
    v32 = v10;
    boost::detail::shared_count::shared_count<Caver::SkeletonInstance>();
    boost::detail::sp_enable_shared_from_this();
    v11 = (_QWORD *)a1[4];
    a1[3] = v32;
    a1[4] = v33;
    if ( v11 )
    {
      v12 = v11[1] - 1LL;
      v11[1] = v12;
      if ( !v12 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
        v13 = v11[2] - 1LL;
        v11[2] = v13;
        if ( !v13 )
          (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
      }
    }
    v14 = *(_QWORD **)(*a2 + 40LL);
    v31 = *(_QWORD *)(*a2 + 32LL);
    v33 = v14;
    if ( v14 )
      ++v14[1];
    Caver::SkeletonInstance::InitWithSkeleton();
    if ( v33 )
    {
      v15 = v33[1] - 1LL;
      v33[1] = v15;
      if ( !v15 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
        v16 = v33[2] - 1LL;
        v33[2] = v16;
        if ( !v16 )
          (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
      }
    }
    v9 = *a2;
  }
  v17 = *(_QWORD *)(v9 + 16) - *(_QWORD *)(v9 + 8);
  v18 = (int)(v17 >> 4);
  if ( !is_mul_ok(v18, 0x10u) || (unsigned __int64)(16LL * (int)((unsigned __int64)v17 >> 4)) >= 0xFFFFFFFFFFFFFFF8LL )
    v19 = -1;
  else
    v19 = 16LL * (int)((unsigned __int64)v17 >> 4) + 8;
  v20 = (unsigned __int64 *)operator new[](v19);
  *v20 = v18;
  v21 = v20 + 1;
  if ( (v17 & 0xFFFFFFFF0LL) != 0 )
    memset(v20 + 1, 0, (v17 << 28 >> 28) & 0xFFFFFFFFFFFFFFF0LL);
  a1[5] = v21;
  boost::checked_array_delete<boost::shared_ptr<Caver::MeshInstance>>();
  if ( (int)((*(_QWORD *)(*a2 + 16LL) - *(_QWORD *)(*a2 + 8LL)) >> 4) >= 1 )
  {
    v22 = 0;
    v23 = 0;
    do
    {
      Caver::MeshInstance::InstanceWithMesh();
      v24 = a1[5];
      if ( v33 )
        ++v33[1];
      v25 = (_QWORD *)(v24 + v22);
      v26 = (_QWORD *)v25[1];
      *v25 = v31;
      v25[1] = v33;
      if ( v26 )
      {
        v27 = v26[1] - 1LL;
        v26[1] = v27;
        if ( !v27 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
          v28 = v26[2] - 1LL;
          v26[2] = v28;
          if ( !v28 )
            (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
        }
      }
      if ( v33 )
      {
        v29 = v33[1] - 1LL;
        v33[1] = v29;
        if ( !v29 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
          v30 = v33[2] - 1LL;
          v33[2] = v30;
          if ( !v30 )
            (*(void (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
        }
      }
      ++v23;
      v22 += 16;
    }
    while ( v23 < (int)((*(_QWORD *)(*a2 + 16LL) - *(_QWORD *)(*a2 + 8LL)) >> 4) );
  }
}

