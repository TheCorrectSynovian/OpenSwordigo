/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000275BF8
 * Mangled: _ZN5Caver17ItemDropComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ItemDropComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA840  Caver::Component::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000001FED90  google::protobuf::internal::ExtensionSet::GetMessage(int,google::protobuf::MessageLite const&)
 *   0x0000000000200660  Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 147
 *   insn=0x0000000000275C14 string=0x0000000000275C18 "H"
 *   insn=0x0000000000275C1C string=0x0000000000275C20 ""
 *   insn=0x0000000000275C30 string=0x00000000001FA840 "0'"
 *   insn=0x0000000000275C34 string=0x0000000000275C38 "AD"
 *   insn=0x0000000000275C44 string=0x0000000000275C48 "R$"
 *   insn=0x0000000000275C50 string=0x0000000000275C54 "`"
 *   insn=0x0000000000275C5C string=0x0000000000275C60 "`"
 *   insn=0x0000000000275C68 string=0x0000000000275C6C "h"
 *   insn=0x0000000000275C6C string=0x0000000000275C78 "h"
 *   insn=0x0000000000275C70 string=0x0000000000275C74 "i"
 *   insn=0x0000000000275C7C string=0x0000000000275C80 "h"
 *   insn=0x0000000000275C84 string=0x0000000000275C88 "h"
 *   insn=0x0000000000275C88 string=0x0000000000275C8C "t""
 *   insn=0x0000000000275C94 string=0x0000000000275CA4 "?"
 *   insn=0x0000000000275C98 string=0x0000000000275C9C "q*"
 *   insn=0x0000000000275CA4 string=0x0000000000275CA8 "K"
 *   insn=0x0000000000275CAC string=0x0000000000275CB0 "Z"
 *   insn=0x0000000000275CBC string=0x0000000000275CC0 "Hc"
 *   insn=0x0000000000275CCC string=0x0000000000275CD0 "#"
 *   insn=0x0000000000275CD4 string=0x0000000000275CD8 ")=G"
 *   insn=0x0000000000275CD8 string=0x0000000000275CDC "!"
 *   insn=0x0000000000275CE0 string=0x0000000000275CE4 "\t"
 *   insn=0x0000000000275CE0 string=0x0000000000275D1C "\t"
 *   insn=0x0000000000275CE4 string=0x0000000000275CE8 "*"
 *   insn=0x0000000000275CE8 string=0x0000000000275CEC "\n"
 *   insn=0x0000000000275CF0 string=0x0000000000275CF4 ""
 *   insn=0x0000000000275CF4 string=0x0000000000275D28 "?"
 *   insn=0x0000000000275CF8 string=0x0000000000275CFC ")=G"
 *   insn=0x0000000000275CFC string=0x0000000000275D00 "!"
 *   insn=0x0000000000275D04 string=0x0000000000275D08 "\t"
 *   insn=0x0000000000275D04 string=0x0000000000275D3C "\t"
 *   insn=0x0000000000275D08 string=0x0000000000275D0C "*"
 *   insn=0x0000000000275D0C string=0x0000000000275D10 "\n"
 *   insn=0x0000000000275D18 string=0x0000000000275D48 "?"
 *   insn=0x0000000000275D1C string=0x0000000000275D20 "*"
 *   insn=0x0000000000275D20 string=0x0000000000275D24 "\n"
 *   insn=0x0000000000275D28 string=0x0000000000275D2C ","
 *   insn=0x0000000000275D34 string=0x0000000000275D38 "6"
 *   insn=0x0000000000275D3C string=0x0000000000275D40 "*"
 *   insn=0x0000000000275D40 string=0x0000000000275D44 "\n"
 *   insn=0x0000000000275D54 string=0x0000000000275D58 "2"
 *   insn=0x0000000000275D70 string=0x0000000000275D74 "M"
 *   insn=0x0000000000275D7C string=0x0000000000275D80 "J"
 *   insn=0x0000000000275D90 string=0x0000000000275D94 "h&Q)"
 *   insn=0x0000000000275D98 string=0x0000000000275D9C ""
 *   insn=0x0000000000275D9C string=0x0000000000275DA0 "(y"
 *   insn=0x0000000000275D9C string=0x0000000000275DBC "xJ@"
 *   insn=0x0000000000275DA4 string=0x0000000000275DA8 "I"
 *   insn=0x0000000000275DB0 string=0x0000000000275DB4 "+*"
 *   insn=0x0000000000275DCC string=0x0000000000275DD0 "6"
 *   insn=0x0000000000275DD8 string=0x0000000000275DDC "3"
 *   insn=0x0000000000275DE0 string=0x0000000000275DE4 "\t"
 *   insn=0x0000000000275DE4 string=0x0000000000275DE8 "("
 *   insn=0x0000000000275DEC string=0x0000000000275DF0 "(\t"
 *   insn=0x0000000000275DF4 string=0x0000000000275DF8 ""
 *   insn=0x0000000000275E08 string=0x0000000000275E0C "A"
 *   insn=0x0000000000275E0C string=0x0000000000275CD4 "i#"
 *   insn=0x0000000000275E1C string=0x0000000000275CF8 "i#"
 *   insn=0x0000000000275E20 string=0x0000000000275E24 "{"
 *   insn=0x0000000000275E30 string=0x0000000000275E34 "("
 *   insn=0x0000000000275E34 string=0x0000000000275E38 ""
 *   insn=0x0000000000275E38 string=0x0000000000275E3C ""
 *   insn=0x0000000000275E70 string=0x0000000000275E74 ""
 *   insn=0x0000000000275E78 string=0x0000000000275E7C " "
 *   insn=0x0000000000275E84 string=0x0000000000275E88 "h&Q)"
 *   insn=0x0000000000275E8C string=0x0000000000275E90 ""
 *   insn=0x0000000000275E90 string=0x0000000000275E94 "(y"
 *   insn=0x0000000000275E90 string=0x0000000000275EB0 "wJ@"
 *   insn=0x0000000000275E98 string=0x0000000000275E9C "I"
 *   insn=0x0000000000275EC4 string=0x0000000000275EC8 "`""
 *   insn=0x0000000000275ED4 string=0x0000000000275ED8 "A"
 *   insn=0x0000000000275ED8 string=0x0000000000275EDC "\t\t@"
 *   insn=0x0000000000275EE0 string=0x0000000000275EE4 "I"
 *   insn=0x0000000000275EE4 string=0x0000000000275EE8 ""
 *   insn=0x0000000000275EE8 string=0x0000000000275EEC "H\t"
 *   insn=0x0000000000275EF0 string=0x0000000000275EF4 ""
 *   insn=0x0000000000275F04 string=0x0000000000275F08 "A"
 *   insn=0x0000000000275F08 string=0x0000000000275F50 "i#"
 *   insn=0x0000000000275F18 string=0x0000000000275F74 "i#"
 *   insn=0x0000000000275F1C string=0x0000000000275F20 ""
 *   insn=0x0000000000275F28 string=0x0000000000275F2C "a"
 *   insn=0x0000000000275F50 string=0x0000000000275F54 ")=G"
 *   insn=0x0000000000275F54 string=0x0000000000275F58 "!"
 *   insn=0x0000000000275F5C string=0x0000000000275F60 "\t"
 *   insn=0x0000000000275F5C string=0x0000000000275F98 "\t"
 *   insn=0x0000000000275F60 string=0x0000000000275F64 "*"
 *   insn=0x0000000000275F64 string=0x0000000000275F68 "\n"
 *   insn=0x0000000000275F6C string=0x0000000000275F70 ""
 *   insn=0x0000000000275F70 string=0x0000000000275FA4 "?"
 *   insn=0x0000000000275F74 string=0x0000000000275F78 ")=G"
 *   insn=0x0000000000275F78 string=0x0000000000275F7C "!"
 *   insn=0x0000000000275F80 string=0x0000000000275F84 "\t"
 *   insn=0x0000000000275F80 string=0x0000000000275FB8 "\t"
 *   insn=0x0000000000275F84 string=0x0000000000275F88 "*"
 *   insn=0x0000000000275F88 string=0x0000000000275F8C "\n"
 *   insn=0x0000000000275F94 string=0x0000000000275FC4 "?"
 *   insn=0x0000000000275F98 string=0x0000000000275F9C "*"
 *   insn=0x0000000000275F9C string=0x0000000000275FA0 "\n"
 *   insn=0x0000000000275FA4 string=0x0000000000275FA8 ","
 *   insn=0x0000000000275FB8 string=0x0000000000275FBC "*"
 *   insn=0x0000000000275FBC string=0x0000000000275FC0 "\n"
 *   insn=0x0000000000275FD8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000275FE0 string=0x0000000000275FE4 "(a"
 *   insn=0x0000000000275FEC string=0x0000000000276024 "j#"
 *   insn=0x0000000000275FF8 string=0x0000000000275FFC " "
 *   insn=0x0000000000275FFC string=0x0000000000276000 "i#"
 *   insn=0x0000000000276000 string=0x0000000000276004 ")=G"
 *   insn=0x0000000000276004 string=0x0000000000276008 "!"
 *   insn=0x0000000000276008 string=0x000000000027600C ")"
 *   insn=0x000000000027600C string=0x0000000000276010 "\t"
 *   insn=0x000000000027600C string=0x0000000000276110 "\t"
 *   insn=0x0000000000276010 string=0x0000000000276014 "*"
 *   insn=0x0000000000276014 string=0x0000000000276018 "\n"
 *   insn=0x000000000027601C string=0x0000000000276020 "$"
 *   insn=0x0000000000276020 string=0x00000000002760B0 "?"
 *   insn=0x0000000000276024 string=0x0000000000276028 "J=G"
 *   insn=0x0000000000276028 string=0x000000000027602C ")!"
 *   insn=0x0000000000276030 string=0x0000000000276034 "*"
 *   insn=0x0000000000276030 string=0x0000000000276048 "*"
 *   insn=0x0000000000276034 string=0x0000000000276038 "K"
 *   insn=0x0000000000276038 string=0x000000000027603C "+"
 *   insn=0x0000000000276044 string=0x0000000000276054 "_"
 *   insn=0x0000000000276048 string=0x000000000027604C "K"
 *   insn=0x000000000027604C string=0x0000000000276050 "+"
 *   insn=0x0000000000276070 string=0x0000000000276074 "(a"
 *   insn=0x0000000000276078 string=0x000000000027607C "a"
 *   insn=0x000000000027607C string=0x00000000002760C8 "j#"
 *   insn=0x000000000027608C string=0x0000000000276090 "i#"
 *   insn=0x0000000000276090 string=0x0000000000276094 ")=G"
 *   insn=0x0000000000276094 string=0x0000000000276098 "!"
 *   insn=0x000000000027609C string=0x00000000002760A0 "\t"
 *   insn=0x00000000002760A0 string=0x00000000002760A4 "*"
 *   insn=0x00000000002760A4 string=0x00000000002760A8 "\n"
 *   insn=0x00000000002760B0 string=0x00000000002760B4 "l"
 *   insn=0x00000000002760C8 string=0x00000000002760CC "J=G"
 *   insn=0x00000000002760CC string=0x00000000002760D0 ")!"
 *   insn=0x00000000002760D4 string=0x00000000002760D8 "*"
 *   insn=0x00000000002760D4 string=0x00000000002760EC "*"
 *   insn=0x00000000002760D8 string=0x00000000002760DC "K"
 *   insn=0x00000000002760DC string=0x00000000002760E0 "+"
 *   insn=0x00000000002760E8 string=0x00000000002760F8 "_"
 *   insn=0x00000000002760EC string=0x00000000002760F0 "K"
 *   insn=0x00000000002760F0 string=0x00000000002760F4 "+"
 *   insn=0x00000000002760F8 string=0x00000000002760FC ","
 *   insn=0x0000000000276110 string=0x0000000000276114 "*"
 *   insn=0x0000000000276114 string=0x0000000000276118 "\n"
 *   insn=0x0000000000276118 string=0x000000000027611C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemDropComponent::LoadFromProtobufMessage(
        Caver::ItemDropComponent *this,
        const Caver::Proto::Component *a2)
{
  __int64 Message; // x21
  int v5; // w8
  int v6; // w1
  int *v7; // x20
  __int64 v8; // x27
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  __int64 v13; // x23
  int v14; // w8
  __int64 v15; // x24
  __int64 v16; // x25
  __int64 v17; // x23
  __int64 v18; // x9
  void *v19; // x0
  void *v20; // x0
  int v21; // w8
  __int64 v22; // x23
  __int64 v23; // x25
  __int64 v24; // x19
  __int64 v25; // x10
  void *v26; // x0
  void *v27; // x0
  unsigned int *v28; // x8
  int v29; // w9
  unsigned int *v30; // x8
  int v31; // w9
  int64x2_t v32; // [xsp+10h] [xbp-A0h]
  int64x2_t v33; // [xsp+30h] [xbp-80h] BYREF
  _BYTE v34[12]; // [xsp+40h] [xbp-70h]
  __int64 v35; // [xsp+58h] [xbp-58h]

  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::Component::LoadFromProtobufMessage(this, a2);
  Message = google::protobuf::internal::ExtensionSet::GetMessage(
              (const Caver::Proto::Component *)((char *)a2 + 8),
              Caver::Proto::ItemDropComponent::extension,
              (const google::protobuf::MessageLite *)qword_6E97D0);
  sub_56A6A8((char *)this + 120);
  sub_56A6A8((char *)this + 128);
  v5 = *(_DWORD *)(Message + 92);
  if ( (v5 & 8) != 0 )
    *((_BYTE *)this + 112) = *(_BYTE *)(Message + 88);
  if ( (v5 & 0x10) != 0 )
    *((_BYTE *)this + 113) = *(_BYTE *)(Message + 89);
  v6 = *(_DWORD *)(Message + 40);
  v7 = (int *)((char *)this + 136);
  if ( *((_DWORD *)this + 35) < v6 )
  {
    Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize();
    v6 = *(_DWORD *)(Message + 40);
  }
  if ( v6 >= 1 )
  {
    v8 = 0;
    v32 = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)(Message + 32) + 8 * v8);
      v33 = v32;
      sub_56A6A8(&v33);
      sub_56A6A8(&v33.n128_i8[8]);
      *(_QWORD *)v34 = *(_QWORD *)(v13 + 32);
      *(_DWORD *)&v34[8] = *(_DWORD *)(v13 + 40);
      v14 = *((_DWORD *)this + 34);
      if ( v14 >= *((_DWORD *)this + 35) )
      {
        Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize();
        v14 = *v7;
      }
      v15 = *((_QWORD *)this + 18);
      v16 = v14;
      v17 = v15 + 32LL * v14;
      sub_56A6A8(v17);
      sub_56A6A8(v17 + 8);
      v18 = v15 + 32 * v16;
      *(_DWORD *)(v18 + 24) = *(_DWORD *)&v34[8];
      *(_QWORD *)(v18 + 16) = *(_QWORD *)v34;
      ++*v7;
      v19 = (void *)(v33.n128_u64[1] - 24);
      if ( (__int64 *)(v33.n128_u64[1] - 24) != &qword_6FD2E0 )
      {
        v9 = (unsigned int *)(v33.n128_u64[1] - 8);
        if ( &pthread_create )
        {
          do
            v10 = __ldaxr(v9);
          while ( __stlxr(v10 - 1, v9) );
        }
        else
        {
          v10 = (*v9)--;
        }
        if ( v10 <= 0 )
          operator delete(v19);
      }
      v20 = (void *)(v33.n128_u64[0] - 24);
      if ( (__int64 *)(v33.n128_u64[0] - 24) != &qword_6FD2E0 )
      {
        v11 = (unsigned int *)(v33.n128_u64[0] - 8);
        if ( &pthread_create )
        {
          do
            v12 = __ldaxr(v11);
          while ( __stlxr(v12 - 1, v11) );
        }
        else
        {
          v12 = (*v11)--;
        }
        if ( v12 <= 0 )
          operator delete(v20);
      }
      ++v8;
    }
    while ( v8 < *(int *)(Message + 40) );
  }
  if ( *(_QWORD *)(**(_QWORD **)(Message + 16) - 24LL) && !*v7 )
  {
    v33 = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
    sub_56A6A8(&v33);
    sub_56A6A8(&v33.n128_i8[8]);
    *(_DWORD *)v34 = 1065353216;
    *(_QWORD *)&v34[4] = 0x100000001LL;
    v21 = *((_DWORD *)this + 34);
    if ( v21 >= *((_DWORD *)this + 35) )
    {
      Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize();
      v21 = *v7;
    }
    v22 = *((_QWORD *)this + 18);
    v23 = v21;
    v24 = v22 + 32LL * v21;
    sub_56A6A8(v24);
    sub_56A6A8(v24 + 8);
    v25 = v22 + 32 * v23;
    *(_DWORD *)(v25 + 24) = *(_DWORD *)&v34[8];
    *(_QWORD *)(v25 + 16) = *(_QWORD *)v34;
    ++*v7;
    v26 = (void *)(v33.n128_u64[1] - 24);
    if ( (__int64 *)(v33.n128_u64[1] - 24) != &qword_6FD2E0 )
    {
      v28 = (unsigned int *)(v33.n128_u64[1] - 8);
      if ( &pthread_create )
      {
        do
          v29 = __ldaxr(v28);
        while ( __stlxr(v29 - 1, v28) );
      }
      else
      {
        v29 = (*v28)--;
      }
      if ( v29 <= 0 )
        operator delete(v26);
    }
    v27 = (void *)(v33.n128_u64[0] - 24);
    if ( (__int64 *)(v33.n128_u64[0] - 24) != &qword_6FD2E0 )
    {
      v30 = (unsigned int *)(v33.n128_u64[0] - 8);
      if ( &pthread_create )
      {
        do
          v31 = __ldaxr(v30);
        while ( __stlxr(v31 - 1, v30) );
      }
      else
      {
        v31 = (*v30)--;
      }
      if ( v31 <= 0 )
        operator delete(v27);
    }
  }
}

