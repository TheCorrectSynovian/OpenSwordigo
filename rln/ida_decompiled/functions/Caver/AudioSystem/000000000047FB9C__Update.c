/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047FB9C
 * Mangled: _ZN5Caver11AudioSystem6UpdateEf
 * Demangled: Caver::AudioSystem::Update(float)
 *
 * Callers: 1
 *   0x00000000001FA4B0  Caver::AudioSystem::Update(float)
 *
 * Callees: 9
 *   0x00000000001F48F0  std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SoundEffectSource>*,std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>>,boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *   0x00000000001F49C0  Caver::SoundEffectSource::Play(void)
 *   0x00000000001F5460  Caver::MusicPlayer::Update(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9D40  Caver::SoundEffectSource::EnqueueSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *   0x00000000001FA120  .strcmp
 *   0x00000000001FBB10  Caver::SoundEffectSource::Update(float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 152
 *   insn=0x000000000047FBC0 string=0x000000000047FBC4 "V"
 *   insn=0x000000000047FBCC string=0x000000000047FBD0 ""
 *   insn=0x000000000047FBD4 string=0x000000000047FBD8 "`6@"
 *   insn=0x000000000047FBD8 string=0x000000000047FBDC "`"
 *   insn=0x000000000047FBDC string=0x000000000047FBE8 "y"A"
 *   insn=0x000000000047FBE4 string=0x00000000001F5460 "P'"
 *   insn=0x000000000047FBF0 string=0x000000000047FBF4 "w"
 *   insn=0x000000000047FBF0 string=0x000000000047FE40 "t"
 *   insn=0x000000000047FBF4 string=0x000000000047FBF8 "t"
 *   insn=0x000000000047FBFC string=0x000000000047FC00 "("
 *   insn=0x000000000047FC08 string=0x000000000047FC0C "\t\t@"
 *   insn=0x000000000047FC0C string=0x000000000047FC10 ")"
 *   insn=0x000000000047FC10 string=0x000000000047FC14 "\t\t"
 *   insn=0x000000000047FC1C string=0x000000000047FC20 "  "
 *   insn=0x000000000047FC28 string=0x000000000047FD00 "8#"
 *   insn=0x000000000047FC34 string=0x000000000047FC44 "z"
 *   insn=0x000000000047FC38 string=0x000000000047FC3C ""
 *   insn=0x000000000047FC44 string=0x000000000047FC48 "_"
 *   insn=0x000000000047FC48 string=0x000000000047FC4C "@"
 *   insn=0x000000000047FC4C string=0x000000000047FC50 "H"
 *   insn=0x000000000047FC58 string=0x000000000047FC5C "\t@"
 *   insn=0x000000000047FC5C string=0x000000000047FC60 ")"
 *   insn=0x000000000047FC60 string=0x000000000047FC64 "\t"
 *   insn=0x000000000047FC68 string=0x000000000047FC6C "@"
 *   insn=0x000000000047FC6C string=0x000000000047FC94 "\tI@"
 *   insn=0x000000000047FC70 string=0x000000000047FC74 "@"
 *   insn=0x000000000047FC70 string=0x000000000047FCC8 "Z#"
 *   insn=0x000000000047FC74 string=0x000000000047FC78 ""
 *   insn=0x000000000047FC78 string=0x000000000047FC7C ""
 *   insn=0x000000000047FC7C string=0x000000000047FC80 "A"
 *   insn=0x000000000047FC80 string=0x000000000047FC84 ""
 *   insn=0x000000000047FC84 string=0x000000000047FC88 ""
 *   insn=0x000000000047FC98 string=0x000000000047FC9C " "
 *   insn=0x000000000047FC9C string=0x000000000047FCC0 " !*"
 *   insn=0x000000000047FCA0 string=0x000000000047FCA4 ""
 *   insn=0x000000000047FCB0 string=0x000000000047FCB4 ""
 *   insn=0x000000000047FCC0 string=0x000000000047FCC4 "d"
 *   insn=0x000000000047FCD8 string=0x000000000047FD18 "Z"
 *   insn=0x000000000047FCDC string=0x000000000047FCE0 ""
 *   insn=0x000000000047FCEC string=0x000000000047FCF0 ""
 *   insn=0x000000000047FCF8 string=0x000000000047FCFC ""
 *   insn=0x000000000047FD04 string=0x000000000047FD08 "@"
 *   insn=0x000000000047FD08 string=0x000000000047FD0C "H"
 *   insn=0x000000000047FD08 string=0x000000000047FE10 "@"
 *   insn=0x000000000047FD0C string=0x000000000047FE2C "h"
 *   insn=0x000000000047FD10 string=0x000000000047FD14 "U"
 *   insn=0x000000000047FD18 string=0x000000000047FD60 "i"
 *   insn=0x000000000047FD1C string=0x000000000047FD20 "("
 *   insn=0x000000000047FD20 string=0x000000000047FD24 "a"C"
 *   insn=0x000000000047FD20 string=0x00000000001F49C0 "P'"
 *   insn=0x000000000047FD24 string=0x000000000047FD28 "?"
 *   insn=0x000000000047FD28 string=0x000000000047FD2C "@"
 *   insn=0x000000000047FD30 string=0x000000000047FD34 "("
 *   insn=0x000000000047FD38 string=0x000000000047FD3C "\t\t@"
 *   insn=0x000000000047FD38 string=0x000000000047FD48 "( "
 *   insn=0x000000000047FD3C string=0x000000000047FD40 ")"
 *   insn=0x000000000047FD40 string=0x000000000047FD44 "\t\t"
 *   insn=0x000000000047FD5C string=0x00000000001F48F0 "P'"
 *   insn=0x000000000047FD60 string=0x000000000047FD64 "(#"
 *   insn=0x000000000047FD6C string=0x000000000047FD70 "("
 *   insn=0x000000000047FD6C string=0x000000000047FDDC "\t!"
 *   insn=0x000000000047FD74 string=0x000000000047FD78 ""
 *   insn=0x000000000047FD78 string=0x000000000047FD7C ""
 *   insn=0x000000000047FD80 string=0x000000000047FD84 "(@"
 *   insn=0x000000000047FD88 string=0x000000000047FD8C "\t\t@"
 *   insn=0x000000000047FD88 string=0x000000000047FD98 " "
 *   insn=0x000000000047FD8C string=0x000000000047FD90 ")"
 *   insn=0x000000000047FD90 string=0x000000000047FD94 "\t\t"
 *   insn=0x000000000047FD98 string=0x000000000047FD9C "("
 *   insn=0x000000000047FDA0 string=0x000000000047FDA4 "@"
 *   insn=0x000000000047FDA4 string=0x000000000047FDA8 ""
 *   insn=0x000000000047FDA8 string=0x000000000047FDAC ""
 *   insn=0x000000000047FDB0 string=0x000000000047FDB4 ""
 *   insn=0x000000000047FDB4 string=0x000000000047FDB8 ""
 *   insn=0x000000000047FDC4 string=0x000000000047FDC8 "9#"
 *   insn=0x000000000047FDCC string=0x000000000047FDD0 "h"
 *   insn=0x000000000047FDDC string=0x000000000047FDE0 "i"
 *   insn=0x000000000047FDE8 string=0x000000000047FDEC "@"
 *   insn=0x000000000047FDEC string=0x000000000047FDF0 ""
 *   insn=0x000000000047FDF0 string=0x000000000047FDF4 ""
 *   insn=0x000000000047FDF8 string=0x000000000047FDFC ""
 *   insn=0x000000000047FDFC string=0x000000000047FE00 ""
 *   insn=0x000000000047FE10 string=0x000000000047FE14 ""
 *   insn=0x000000000047FE14 string=0x000000000047FE18 ""
 *   insn=0x000000000047FE1C string=0x000000000047FE20 ""
 *   insn=0x000000000047FE20 string=0x000000000047FE24 ""
 *   insn=0x000000000047FE34 string=0x000000000047FE38 "A"
 *   insn=0x000000000047FE40 string=0x000000000047FE44 "w"
 *   insn=0x000000000047FE50 string=0x000000000047FE54 "`\t"
 *   insn=0x000000000047FE64 string=0x000000000047FE68 "@"
 *   insn=0x000000000047FE68 string=0x000000000047FE6C ""
 *   insn=0x000000000047FE6C string=0x000000000047FE70 ""
 *   insn=0x000000000047FE74 string=0x000000000047FE78 "&"
 *   insn=0x000000000047FE78 string=0x00000000001FBB10 "0'"
 *   insn=0x000000000047FE7C string=0x000000000047FE80 "\ta@9I"
 *   insn=0x000000000047FE80 string=0x000000000047FE84 "I"
 *   insn=0x000000000047FE90 string=0x00000000001F9D40 "0'"
 *   insn=0x000000000047FEA0 string=0x000000000047FEA4 "("
 *   insn=0x000000000047FEA0 string=0x000000000047FF20 "\t!"
 *   insn=0x000000000047FEAC string=0x000000000047FEB0 ""
 *   insn=0x000000000047FEBC string=0x000000000047FEC0 "\t\t@"
 *   insn=0x000000000047FEC0 string=0x000000000047FEC4 ")"
 *   insn=0x000000000047FEC4 string=0x000000000047FEC8 "\t\t"
 *   insn=0x000000000047FED4 string=0x000000000047FED8 "@"
 *   insn=0x000000000047FED8 string=0x000000000047FEDC ""
 *   insn=0x000000000047FEDC string=0x000000000047FEE0 ""
 *   insn=0x000000000047FEE4 string=0x000000000047FEE8 ""
 *   insn=0x000000000047FEE8 string=0x000000000047FEEC ""
 *   insn=0x000000000047FF14 string=0x000000000047FF54 "@"
 *   insn=0x000000000047FF2C string=0x000000000047FF30 "@"
 *   insn=0x000000000047FF30 string=0x000000000047FF34 ""
 *   insn=0x000000000047FF34 string=0x000000000047FF38 ""
 *   insn=0x000000000047FF3C string=0x000000000047FF40 ""
 *   insn=0x000000000047FF40 string=0x000000000047FF44 ""
 *   insn=0x000000000047FF54 string=0x000000000047FF58 ""
 *   insn=0x000000000047FF58 string=0x000000000047FF5C ""
 *   insn=0x000000000047FF60 string=0x000000000047FF64 ""
 *   insn=0x000000000047FF64 string=0x000000000047FF68 ""
 *   insn=0x000000000047FF88 string=0x000000000047FF8C "a"
 *   insn=0x000000000047FFB8 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047FFD8 string=0x000000000047FFDC "@"
 *   insn=0x000000000047FFDC string=0x000000000047FFE0 ""
 *   insn=0x000000000047FFE0 string=0x000000000047FFE4 ""
 *   insn=0x000000000047FFE8 string=0x000000000047FFEC ""
 *   insn=0x000000000047FFEC string=0x000000000047FFF0 ""
 *   insn=0x0000000000480004 string=0x000000000048003C "@"
 *   insn=0x000000000048000C string=0x0000000000480010 "5"
 *   insn=0x0000000000480014 string=0x0000000000480018 ""
 *   insn=0x0000000000480024 string=0x0000000000480028 ""
 *   insn=0x000000000048003C string=0x0000000000480040 ""
 *   insn=0x0000000000480040 string=0x0000000000480044 ""
 *   insn=0x0000000000480048 string=0x000000000048004C ""
 *   insn=0x000000000048004C string=0x0000000000480050 ""
 *   insn=0x0000000000480070 string=0x0000000000480074 "_"
 *   insn=0x000000000048007C string=0x0000000000480080 "("
 *   insn=0x000000000048007C string=0x0000000000480094 "_"
 *   insn=0x0000000000480080 string=0x0000000000480084 ""
 *   insn=0x0000000000480088 string=0x000000000048008C "h"
 *   insn=0x0000000000480098 string=0x00000000004800B0 "_"
 *   insn=0x000000000048009C string=0x00000000004800A0 "h\n"
 *   insn=0x00000000004800A4 string=0x00000000004800A8 "`"
 *   insn=0x00000000004800B4 string=0x00000000004800B8 "_"
 *   insn=0x00000000004800B8 string=0x00000000004800BC "!"
 *   insn=0x00000000004800BC string=0x00000000004800C0 "h"
 *   insn=0x00000000004800C0 string=0x00000000004800C4 "!"
 *   insn=0x00000000004800C4 string=0x00000000004800C8 ""
 *   insn=0x00000000004800CC string=0x00000000004800D0 "*"
 *   insn=0x00000000004800D0 string=0x00000000004800D4 "!4@"
 *   insn=0x00000000004800D4 string=0x00000000004800D8 "_"
 *   insn=0x00000000004800D4 string=0x00000000005966B0 "N5boost3_bi6bind_tIvNS_4_mfi3mf0IvN5Caver11AudioSystemEEENS0_5list1INS0_5valueIPS5_EEEEEE"
 *   insn=0x00000000004800D8 string=0x00000000004800DC " "
 *   insn=0x00000000004800E0 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SoundEffectSource *__fastcall Caver::AudioSystem::Update(Caver::AudioSystem *this, float a2)
{
  Caver::SoundEffectSource *result; // x0
  Caver::SoundEffectSource **v5; // x25
  __int64 *v6; // x23
  __int64 *v7; // x20
  Caver::SoundEffectSource **v8; // x24
  Caver::SoundEffectSource *v9; // x8
  float v10; // s0
  float *v11; // x21
  __int64 *v12; // x26
  __int64 *i; // x27
  __int64 v14; // x8
  float *v15; // x0
  int v16; // w8
  float v17; // s9
  float v18; // s10
  int v19; // w8
  int v20; // w26
  int v21; // w8
  Caver::SoundEffectSource **v22; // x1
  char *v23; // x9
  char *v24; // x8
  __int64 v25; // x8
  __int64 v26; // x21
  Caver::SoundEffectSource *v27; // x8
  Caver::SoundEffectSource *v28; // x0
  int v29; // w8
  _DWORD *v30; // x0
  int v31; // w8
  int v32; // w8
  __int64 v33; // x20
  __int64 v34; // x19
  Caver::SoundEffectSource *v35; // x0
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x21
  __int64 v39; // x8
  Caver::SoundEffectSource *v40; // x0
  int v41; // w8
  _DWORD *v42; // x0
  int v43; // w8
  int v44; // w8
  Caver::SoundEffectSource *v45; // [xsp+20h] [xbp-70h]
  Caver::SoundEffectSource *v46; // [xsp+20h] [xbp-70h]

  _ReadStatusReg(TPIDR_EL0);
  result = (Caver::SoundEffectSource *)*((_QWORD *)this + 13);
  if ( result )
    result = (Caver::SoundEffectSource *)Caver::MusicPlayer::Update(result, a2);
  v5 = (Caver::SoundEffectSource **)*((_QWORD *)this + 2);
  if ( *((Caver::SoundEffectSource ***)this + 3) != v5 )
  {
    v6 = (__int64 *)((char *)this + 48);
    v7 = (__int64 *)((char *)this + 40);
    v8 = (Caver::SoundEffectSource **)*((_QWORD *)this + 2);
    while ( 1 )
    {
      v9 = *v5;
      v45 = *v5;
      if ( *v5 )
        ++*((_DWORD *)v9 + 2);
      v10 = *((float *)v9 + 17) - a2;
      *((float *)v9 + 17) = v10;
      if ( v10 < 0.0 )
        break;
      v8 = v5 + 1;
      result = v45;
      if ( v45 )
        goto LABEL_49;
LABEL_51:
      v5 = v8;
      if ( *((Caver::SoundEffectSource ***)this + 3) == v8 )
        goto LABEL_54;
    }
    v11 = (float *)*((_QWORD *)v9 + 5);
    *((_DWORD *)v9 + 17) = 0;
    if ( v11 )
      ++*((_DWORD *)v11 + 2);
    v12 = (__int64 *)*((_QWORD *)this + 5);
    for ( i = (__int64 *)*((_QWORD *)this + 6); i != v12; ++v12 )
    {
      v14 = *v12;
      v15 = *(float **)(*v12 + 40);
      if ( v15 )
        ++*((_DWORD *)v15 + 2);
      if ( v15 == v11 )
      {
        v17 = *(float *)(v14 + 72);
        v18 = v11[15];
        if ( v15 )
        {
          v19 = *((_DWORD *)v11 + 2) - 1;
          *((_DWORD *)v11 + 2) = v19;
          if ( !v19 )
            (*(void (__fastcall **)(float *))(*(_QWORD *)v11 + 8LL))(v11);
        }
        if ( v17 < v18 )
        {
          v20 = 0;
          if ( !v11 )
            goto LABEL_28;
          goto LABEL_23;
        }
      }
      else if ( v15 )
      {
        v16 = *((_DWORD *)v15 + 2) - 1;
        *((_DWORD *)v15 + 2) = v16;
        if ( !v16 )
          (*(void (__fastcall **)(float *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v20 = 1;
    if ( !v11 )
      goto LABEL_28;
LABEL_23:
    v21 = *((_DWORD *)v11 + 2) - 1;
    *((_DWORD *)v11 + 2) = v21;
    if ( !v21 )
      (*(void (__fastcall **)(float *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_28:
    if ( v20 )
    {
      Caver::SoundEffectSource::Play(v45);
      v22 = (Caver::SoundEffectSource **)*((_QWORD *)this + 6);
      if ( v22 == *((Caver::SoundEffectSource ***)this + 7) )
      {
        std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>>::_M_insert_aux();
      }
      else
      {
        *v22 = v45;
        if ( v45 )
          ++*((_DWORD *)v45 + 2);
        *v6 = (__int64)(v22 + 1);
      }
    }
    v23 = (char *)*((_QWORD *)this + 3);
    v24 = (char *)(v5 + 1);
    if ( v5 + 1 != (Caver::SoundEffectSource **)v23 )
    {
      v25 = v23 - v24;
      if ( v25 < 1 )
      {
        v24 = (char *)*((_QWORD *)this + 3);
      }
      else
      {
        v26 = ((unsigned __int64)v25 >> 3) + 1;
        do
        {
          v27 = v5[1];
          if ( v27 )
            ++*((_DWORD *)v27 + 2);
          v28 = *v5;
          *v5 = v27;
          if ( v28 )
          {
            v29 = *((_DWORD *)v28 + 2) - 1;
            *((_DWORD *)v28 + 2) = v29;
            if ( !v29 )
              (*(void (__fastcall **)(Caver::SoundEffectSource *))(*(_QWORD *)v28 + 8LL))(v28);
          }
          --v26;
          ++v5;
        }
        while ( v26 > 1 );
        v24 = (char *)*((_QWORD *)this + 3);
      }
    }
    *((_QWORD *)this + 3) = v24 - 8;
    v30 = (_DWORD *)*((_QWORD *)v24 - 1);
    if ( v30 )
    {
      v31 = v30[2] - 1;
      v30[2] = v31;
      if ( !v31 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 8LL))(v30);
    }
    result = v45;
    if ( !v45 )
      goto LABEL_51;
LABEL_49:
    v32 = *((_DWORD *)result + 2) - 1;
    *((_DWORD *)result + 2) = v32;
    if ( !v32 )
      result = (Caver::SoundEffectSource *)(*(__int64 (__fastcall **)(Caver::SoundEffectSource *))(*(_QWORD *)result
                                                                                                 + 8LL))(result);
    goto LABEL_51;
  }
  v7 = (__int64 *)((char *)this + 40);
  v6 = (__int64 *)((char *)this + 48);
LABEL_54:
  v33 = *v7;
  if ( *v6 != v33 )
  {
    v34 = v33;
    while ( 1 )
    {
      v35 = *(Caver::SoundEffectSource **)v33;
      v46 = *(Caver::SoundEffectSource **)v33;
      if ( *(_QWORD *)v33 )
        ++*((_DWORD *)v35 + 2);
      Caver::SoundEffectSource::Update(v35, a2);
      if ( *((_BYTE *)v46 + 24) )
        break;
      v34 = v33 + 8;
      result = v46;
      if ( v46 )
        goto LABEL_76;
LABEL_78:
      v33 = v34;
      if ( *v6 == v34 )
        return result;
    }
    *((_QWORD *)v46 + 4) = 0;
    Caver::SoundEffectSource::EnqueueSource();
    v36 = v33 + 8;
    if ( v33 + 8 != *v6 )
    {
      v37 = *v6 - v36;
      if ( v37 < 1 )
      {
        v36 = *v6;
      }
      else
      {
        v38 = ((unsigned __int64)v37 >> 3) + 1;
        do
        {
          v39 = *(_QWORD *)(v33 + 8);
          if ( v39 )
            ++*(_DWORD *)(v39 + 8);
          v40 = *(Caver::SoundEffectSource **)v33;
          *(_QWORD *)v33 = v39;
          if ( v40 )
          {
            v41 = *((_DWORD *)v40 + 2) - 1;
            *((_DWORD *)v40 + 2) = v41;
            if ( !v41 )
              (*(void (__fastcall **)(Caver::SoundEffectSource *))(*(_QWORD *)v40 + 8LL))(v40);
          }
          --v38;
          v33 += 8;
        }
        while ( v38 > 1 );
        v36 = *v6;
      }
    }
    *v6 = v36 - 8;
    v42 = *(_DWORD **)(v36 - 8);
    if ( v42 )
    {
      v43 = v42[2] - 1;
      v42[2] = v43;
      if ( !v43 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v42 + 8LL))(v42);
    }
    result = v46;
    if ( !v46 )
      goto LABEL_78;
LABEL_76:
    v44 = *((_DWORD *)result + 2) - 1;
    *((_DWORD *)result + 2) = v44;
    if ( !v44 )
      result = (Caver::SoundEffectSource *)(*(__int64 (__fastcall **)(Caver::SoundEffectSource *))(*(_QWORD *)result
                                                                                                 + 8LL))(result);
    goto LABEL_78;
  }
  return result;
}

