/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BEB34
 * Mangled: _ZN5Caver7MapNode23LoadFromProtobufMessageERKNS_5Proto7MapNodeE
 * Demangled: Caver::MapNode::LoadFromProtobufMessage(Caver::Proto::MapNode const&)
 *
 * Callers: 1
 *   0x00000000001F4D00  Caver::MapNode::LoadFromProtobufMessage(Caver::Proto::MapNode const&)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD1C0  std::vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MapNode::Portal*,std::vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>>>,Caver::MapNode::Portal const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 73
 *   insn=0x00000000003BEB54 string=0x00000000003BEB58 "W"
 *   insn=0x00000000003BEB60 string=0x00000000003BEB64 ")"
 *   insn=0x00000000003BEB6C string=0x00000000003BEB70 "h\n@"
 *   insn=0x00000000003BEB70 string=0x00000000003BEB74 ")"
 *   insn=0x00000000003BEB7C string=0x00000000003BEB80 ")"
 *   insn=0x00000000003BEB80 string=0x00000000003BEB84 "("
 *   insn=0x00000000003BEB84 string=0x00000000003BEB88 "\t@"
 *   insn=0x00000000003BEB88 string=0x00000000003BEB8C ""
 *   insn=0x00000000003BEB90 string=0x00000000003BEB94 "a"
 *   insn=0x00000000003BEB98 string=0x00000000003BEB9C "a"
 *   insn=0x00000000003BEBA4 string=0x00000000003BEBA8 "hb@"
 *   insn=0x00000000003BEBAC string=0x00000000003BEBB0 "h2@"
 *   insn=0x00000000003BEBB4 string=0x00000000003BEBB8 "K\t"
 *   insn=0x00000000003BEBB8 string=0x00000000003BEBBC ":"
 *   insn=0x00000000003BEBB8 string=0x00000000003BECE0 "h"
 *   insn=0x00000000003BEBBC string=0x00000000003BEBC0 "I"
 *   insn=0x00000000003BEBC0 string=0x00000000003BEBC4 "Z"
 *   insn=0x00000000003BEBC4 string=0x00000000003BEBC8 "8"
 *   insn=0x00000000003BEBC8 string=0x00000000003BEBCC "("
 *   insn=0x00000000003BEBDC string=0x00000000003BEBE0 "!"
 *   insn=0x00000000003BEBE0 string=0x00000000003BEBE4 "\c"
 *   insn=0x00000000003BEBF0 string=0x00000000003BEBF4 "\t"
 *   insn=0x00000000003BEBF0 string=0x00000000003BEC08 "\t"
 *   insn=0x00000000003BEBF4 string=0x00000000003BEBF8 "*"
 *   insn=0x00000000003BEBF8 string=0x00000000003BEBFC "\n"
 *   insn=0x00000000003BEC04 string=0x00000000003BEC14 "?"
 *   insn=0x00000000003BEC08 string=0x00000000003BEC0C "*"
 *   insn=0x00000000003BEC0C string=0x00000000003BEC10 "\n"
 *   insn=0x00000000003BEC18 string=0x00000000003BECD0 "h2"
 *   insn=0x00000000003BEC20 string=0x00000000003BEC24 "+"
 *   insn=0x00000000003BEC30 string=0x00000000003BEC34 "h"
 *   insn=0x00000000003BEC34 string=0x00000000003BEC38 "yy"
 *   insn=0x00000000003BEC44 string=0x00000000003BEC48 "h"
 *   insn=0x00000000003BEC48 string=0x00000000003BEC4C "yy"
 *   insn=0x00000000003BEC4C string=0x00000000003BEC50 "\t"
 *   insn=0x00000000003BEC54 string=0x00000000003BEC58 "\t"
 *   insn=0x00000000003BEC58 string=0x00000000003BEC5C "?"
 *   insn=0x00000000003BEC5C string=0x00000000003BEC60 "`"
 *   insn=0x00000000003BEC60 string=0x00000000003BEC64 "?\t"
 *   insn=0x00000000003BEC64 string=0x00000000003BEC68 "A"
 *   insn=0x00000000003BEC68 string=0x00000000003BEC70 ""
 *   insn=0x00000000003BEC88 string=0x00000000003BEC8C "'"
 *   insn=0x00000000003BEC8C string=0x00000000003BEC90 "h"
 *   insn=0x00000000003BEC94 string=0x00000000003BEC98 "h"
 *   insn=0x00000000003BECA0 string=0x00000000003BECA4 "a"
 *   insn=0x00000000003BECB8 string=0x00000000003BECBC "A"
 *   insn=0x00000000003BECBC string=0x00000000001FD1C0 "0'"
 *   insn=0x00000000003BECCC string=0x00000000003BEBEC "!"
 *   insn=0x00000000003BECD0 string=0x00000000003BECD4 "9"
 *   insn=0x00000000003BECD4 string=0x00000000003BECD8 "?"
 *   insn=0x00000000003BECD8 string=0x00000000003BECDC "k"
 *   insn=0x00000000003BECE0 string=0x00000000003BECE4 "h"
 *   insn=0x00000000003BECE4 string=0x00000000003BECE8 "i"
 *   insn=0x00000000003BECE4 string=0x00000000003BECF0 "h"
 *   insn=0x00000000003BECF0 string=0x00000000003BECF4 "hj@"
 *   insn=0x00000000003BECF0 string=0x00000000003BECFC "a:@"
 *   insn=0x00000000003BED00 string=0x00000000003BED04 "i"
 *   insn=0x00000000003BED04 string=0x00000000003BED08 "h"
 *   insn=0x00000000003BED0C string=0x00000000003BED10 "h~@"
 *   insn=0x00000000003BED14 string=0x00000000003BED18 "h"
 *   insn=0x00000000003BED28 string=0x00000000003BED2C "A"
 *   insn=0x00000000003BED2C string=0x00000000003BED54 "_"
 *   insn=0x00000000003BED54 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BED5C string=0x00000000003BED60 "(a"
 *   insn=0x00000000003BED68 string=0x00000000003BED6C ")!"
 *   insn=0x00000000003BED70 string=0x00000000003BED74 "*"
 *   insn=0x00000000003BED70 string=0x00000000003BEDA0 "*"
 *   insn=0x00000000003BED74 string=0x00000000003BED78 "K"
 *   insn=0x00000000003BED78 string=0x00000000003BED7C "+"
 *   insn=0x00000000003BED80 string=0x00000000003BED84 "_"
 *   insn=0x00000000003BEDA0 string=0x00000000003BEDA4 "K"
 *   insn=0x00000000003BEDA4 string=0x00000000003BEDA8 "+"
 *   insn=0x00000000003BEDA8 string=0x00000000003BEDAC "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapNode::LoadFromProtobufMessage(Caver::MapNode *this, const Caver::Proto::MapNode *a2)
{
  char *v4; // x0
  const Caver::Proto::MapNode *v5; // x8
  __int64 v6; // x25
  unsigned int *v7; // x8
  int v8; // w9
  __int64 v9; // x8
  int v10; // w9
  __int64 v11; // x22
  char *v12; // x0
  int v13; // w8
  __int64 result; // x0
  char *v15; // [xsp+10h] [xbp-80h] BYREF
  __int64 v16; // [xsp+18h] [xbp-78h]
  __int16 v17; // [xsp+20h] [xbp-70h]
  __int64 v18; // [xsp+28h] [xbp-68h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (char *)this + 16;
  if ( *((_QWORD *)a2 + 2) )
    v5 = a2;
  else
    v5 = (const Caver::Proto::MapNode *)Caver::Proto::MapNode::default_instance_;
  *((_QWORD *)this + 1) = *(_QWORD *)(*((_QWORD *)v5 + 2) + 12LL);
  sub_56A6A8(v4);
  sub_56A6A8((char *)this + 24);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 24);
  if ( *((int *)a2 + 12) >= 1 )
  {
    v6 = 0;
    do
    {
      v15 = &byte_6FD2F8;
      v16 = 1;
      v17 = 0;
      sub_56A6A8(&v15);
      v9 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8 * v6);
      LODWORD(v16) = *(_DWORD *)(v9 + 24);
      v10 = *(_DWORD *)(v9 + 28);
      if ( v10 == 1 || v10 == 2 )
        HIDWORD(v16) = *(_DWORD *)(v9 + 28);
      LOBYTE(v17) = *(_BYTE *)(v9 + 32);
      v11 = *((_QWORD *)this + 7);
      if ( v11 == *((_QWORD *)this + 8) )
      {
        std::vector<Caver::MapNode::Portal>::_M_insert_aux();
      }
      else
      {
        sub_56A528(*((_QWORD *)this + 7), &v15);
        *(_WORD *)(v11 + 16) = v17;
        *(_QWORD *)(v11 + 8) = v16;
        *((_QWORD *)this + 7) += 24LL;
      }
      v12 = v15 - 24;
      if ( v15 - 24 != (char *)&qword_6FD2E0 )
      {
        v7 = (unsigned int *)(v15 - 8);
        if ( &pthread_create )
        {
          do
            v8 = __ldaxr(v7);
          while ( __stlxr(v8 - 1, v7) );
        }
        else
        {
          v8 = (*v7)--;
        }
        if ( v8 <= 0 )
          operator delete(v12);
      }
      ++v6;
    }
    while ( v6 < *((int *)a2 + 12) );
  }
  v13 = *((_DWORD *)a2 + 33);
  if ( (v13 & 0x20) != 0 )
    *((_BYTE *)this + 72) = *((_BYTE *)a2 + 100);
  if ( (v13 & 0x40) != 0 )
    *((_DWORD *)this + 22) = *((_DWORD *)a2 + 26);
  result = sub_56A6A8((char *)this + 96);
  *((_BYTE *)this + 104) = *((_BYTE *)a2 + 120);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 31);
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 128);
  return result;
}

