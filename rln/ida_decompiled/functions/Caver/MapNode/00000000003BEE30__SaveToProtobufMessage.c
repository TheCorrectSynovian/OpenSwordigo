/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BEE30
 * Mangled: _ZNK5Caver7MapNode21SaveToProtobufMessageEPNS_5Proto7MapNodeE
 * Demangled: Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode *)
 *
 * Callers: 1
 *   0x0000000000200600  Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode *)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7CD0  Caver::Proto::Vector2::Vector2(void)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FB750  Caver::Proto::MapNode_Portal::MapNode_Portal(void)
 *   0x00000000003BF160  Caver::MapNode::HasPortalTo(std::string const&)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 104
 *   insn=0x00000000003BEE4C string=0x00000000003BEE50 "h"
 *   insn=0x00000000003BEE50 string=0x00000000003BEE54 "u\n@"
 *   insn=0x00000000003BEE58 string=0x00000000003BEE5C ""
 *   insn=0x00000000003BEE5C string=0x00000000003BEE60 "h"
 *   insn=0x00000000003BEE6C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BEE74 string=0x00000000003BEE78 "u\n"
 *   insn=0x00000000003BEE74 string=0x00000000001F7CD0 "0'"
 *   insn=0x00000000003BEE80 string=0x00000000003BEE84 ""
 *   insn=0x00000000003BEE8C string=0x00000000003BEE90 ")"
 *   insn=0x00000000003BEE90 string=0x00000000003BEE94 "h"
 *   insn=0x00000000003BEE94 string=0x00000000003BEE98 "`"
 *   insn=0x00000000003BEE98 string=0x00000000003BEE9C ")=D"
 *   insn=0x00000000003BEEA0 string=0x00000000003BEEA4 ""
 *   insn=0x00000000003BEEA4 string=0x00000000003BEEA8 "h"
 *   insn=0x00000000003BEEB8 string=0x00000000003BEEBC "("
 *   insn=0x00000000003BEEBC string=0x00000000003BEEC0 ""
 *   insn=0x00000000003BEEC0 string=0x00000000003BEEC4 "a"
 *   insn=0x00000000003BEEC4 string=0x00000000003BEEC8 ""
 *   insn=0x00000000003BEEC8 string=0x00000000003BEECC "`"
 *   insn=0x00000000003BEEDC string=0x00000000003BEEE0 ""
 *   insn=0x00000000003BEEE0 string=0x00000000003BEEE4 "H"
 *   insn=0x00000000003BEEE4 string=0x00000000003BEEE8 "I"
 *   insn=0x00000000003BEEE4 string=0x00000000003BEF2C "h"
 *   insn=0x00000000003BEEE8 string=0x00000000003BEEEC "h"
 *   insn=0x00000000003BEEEC string=0x00000000003BEEF0 "`"
 *   insn=0x00000000003BEEF0 string=0x00000000003BEEF4 ")"
 *   insn=0x00000000003BEEF4 string=0x00000000003BEEF8 ""
 *   insn=0x00000000003BEEF8 string=0x00000000003BEEFC "h"
 *   insn=0x00000000003BEF0C string=0x00000000003BEF10 "("
 *   insn=0x00000000003BEF10 string=0x00000000003BEF14 ""
 *   insn=0x00000000003BEF14 string=0x00000000003BEF18 "a"
 *   insn=0x00000000003BEF18 string=0x00000000003BEF1C ""
 *   insn=0x00000000003BEF1C string=0x00000000003BEF20 "`"
 *   insn=0x00000000003BEF30 string=0x00000000003BEF34 ""
 *   insn=0x00000000003BEF34 string=0x00000000003BEF38 "ib"
 *   insn=0x00000000003BEF38 string=0x00000000003BEF3C "h"
 *   insn=0x00000000003BEF48 string=0x00000000003BEF4C "Y"
 *   insn=0x00000000003BEF4C string=0x00000000003BEF50 "("
 *   insn=0x00000000003BEF50 string=0x00000000003BEF54 "9"
 *   insn=0x00000000003BEF54 string=0x00000000003BEF58 ""
 *   insn=0x00000000003BEF58 string=0x00000000003BEF5C "v"
 *   insn=0x00000000003BEF68 string=0x00000000003BEF6C "H"
 *   insn=0x00000000003BEF6C string=0x00000000003BEF70 "i"F))}@"
 *   insn=0x00000000003BEF70 string=0x00000000003BEF74 ")}@"
 *   insn=0x00000000003BEF74 string=0x00000000003BEF78 "?"
 *   insn=0x00000000003BEF7C string=0x00000000003BEF80 "h"
 *   insn=0x00000000003BEF7C string=0x00000000003BEF94 "i:@"
 *   insn=0x00000000003BEF80 string=0x00000000003BEF84 "*"
 *   insn=0x00000000003BEF84 string=0x00000000003BEF88 "j2"
 *   insn=0x00000000003BEF9C string=0x00000000003BEFB0 ""
 *   insn=0x00000000003BEFA4 string=0x00000000003BEFA8 "^"
 *   insn=0x00000000003BEFA8 string=0x00000000003BEFAC "h6@"
 *   insn=0x00000000003BEFA8 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000003BEFB4 string=0x00000000003BEFB8 "h6"
 *   insn=0x00000000003BEFC4 string=0x00000000003BEFC8 "h2"
 *   insn=0x00000000003BEFC4 string=0x00000000001FB750 "0'"
 *   insn=0x00000000003BEFC8 string=0x00000000003BEFCC "i"
 *   insn=0x00000000003BEFCC string=0x00000000003BEFD0 "\n"
 *   insn=0x00000000003BEFD0 string=0x00000000003BEFD4 "j2"
 *   insn=0x00000000003BEFD4 string=0x00000000003BEFD8 "7y("
 *   insn=0x00000000003BEFE0 string=0x00000000003BEFE4 ""
 *   insn=0x00000000003BEFF4 string=0x00000000003BEFF8 "z"
 *   insn=0x00000000003BF010 string=0x00000000003BF014 "\t"
 *   insn=0x00000000003BF020 string=0x00000000003BF024 "_\t"
 *   insn=0x00000000003BF024 string=0x00000000003BF028 "`"
 *   insn=0x00000000003BF028 string=0x00000000003BF02C "_"
 *   insn=0x00000000003BF028 string=0x00000000003BF034 "\t"
 *   insn=0x00000000003BF044 string=0x00000000003BF048 "("
 *   insn=0x00000000003BF058 string=0x00000000003BF05C "a"
 *   insn=0x00000000003BF064 string=0x00000000003BF068 "h"
 *   insn=0x00000000003BF06C string=0x00000000003BF070 "i"
 *   insn=0x00000000003BF070 string=0x00000000003BF074 ""
 *   insn=0x00000000003BF074 string=0x00000000003BF078 "h"
 *   insn=0x00000000003BF080 string=0x00000000003BF084 "i"
 *   insn=0x00000000003BF084 string=0x00000000003BF088 "hj"
 *   insn=0x00000000003BF088 string=0x00000000003BF08C ")"
 *   insn=0x00000000003BF08C string=0x00000000003BF090 "i"
 *   insn=0x00000000003BF098 string=0x00000000003BF09C ""
 *   insn=0x00000000003BF09C string=0x00000000003BF0A0 "H"
 *   insn=0x00000000003BF0A0 string=0x00000000003BF0A4 "I"
 *   insn=0x00000000003BF0A0 string=0x00000000003BF0E8 "h"
 *   insn=0x00000000003BF0A4 string=0x00000000003BF0A8 "h"
 *   insn=0x00000000003BF0A8 string=0x00000000003BF0AC "`:@"
 *   insn=0x00000000003BF0AC string=0x00000000003BF0B0 ")"
 *   insn=0x00000000003BF0B0 string=0x00000000003BF0B4 ""
 *   insn=0x00000000003BF0B4 string=0x00000000003BF0B8 "h"
 *   insn=0x00000000003BF0C4 string=0x00000000003BF0C8 "F"
 *   insn=0x00000000003BF0C8 string=0x00000000003BF0CC "("
 *   insn=0x00000000003BF0CC string=0x00000000003BF0D0 ""
 *   insn=0x00000000003BF0D0 string=0x00000000003BF0D4 "a"
 *   insn=0x00000000003BF0D4 string=0x00000000003BF0D8 ""
 *   insn=0x00000000003BF0D8 string=0x00000000003BF0DC "`:"
 *   insn=0x00000000003BF0E0 string=0x00000000003BF0E4 "q"
 *   insn=0x00000000003BF0EC string=0x00000000003BF0F0 "\n"
 *   insn=0x00000000003BF0F0 string=0x00000000003BF0F4 "j"
 *   insn=0x00000000003BF0F4 string=0x00000000003BF0F8 "i"
 *   insn=0x00000000003BF0FC string=0x00000000003BF100 "\n"
 *   insn=0x00000000003BF100 string=0x00000000003BF104 "j"
 *   insn=0x00000000003BF104 string=0x00000000003BF108 "i~"
 *   insn=0x00000000003BF110 string=0x00000000003BF114 "\t"
 *   insn=0x00000000003BF118 string=0x00000000003BF11C "h"
 *   insn=0x00000000003BF11C string=0x00000000003BF120 "i"
 *   insn=0x00000000003BF148 string=0x00000000003BF154 "W"
 *   insn=0x00000000003BF154 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapNode::SaveToProtobufMessage(Caver::MapNode *this, Caver::Proto::MapNode *a2)
{
  __int64 v3; // x21
  int v5; // w8
  __int64 *v6; // x0
  __int64 result; // x0
  __int64 *v8; // x0
  int v9; // w8
  __int64 v10; // x21
  __int64 i; // x24
  int v12; // w8
  __int64 v13; // x9
  __int64 v14; // x8
  __int64 v15; // x23
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 *v18; // x0
  int v19; // w8
  int v20; // w10
  int v21; // w9
  int v22; // w10
  int v23; // w8
  int v24; // w8
  int v25; // w9
  __int64 *v26; // x0
  int v27; // w8
  char v28; // w9
  int v29; // w9

  v3 = *((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 33) |= 1u;
  if ( !v3 )
  {
    v3 = operator new(0x18u);
    Caver::Proto::Vector2::Vector2((Caver::Proto::Vector2 *)v3);
    *((_QWORD *)a2 + 2) = v3;
  }
  v5 = *(_DWORD *)(v3 + 20) | 3;
  *(_QWORD *)(v3 + 12) = *((_QWORD *)this + 1);
  *(_DWORD *)(v3 + 20) = v5;
  v6 = (__int64 *)*((_QWORD *)a2 + 3);
  *((_DWORD *)a2 + 33) |= 2u;
  if ( v6 == &Caver::Proto::MapNode::_default_level_name_ )
  {
    v6 = (__int64 *)operator new(8u);
    *v6 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 3) = v6;
  }
  result = sub_56A6A8(v6);
  if ( *(_QWORD *)(*((_QWORD *)this + 3) - 24LL) )
  {
    v8 = (__int64 *)*((_QWORD *)a2 + 4);
    *((_DWORD *)a2 + 33) |= 4u;
    if ( v8 == &Caver::Proto::MapNode::_default_title_ )
    {
      v8 = (__int64 *)operator new(8u);
      *v8 = (__int64)&byte_6FD2F8;
      *((_QWORD *)a2 + 4) = v8;
    }
    result = sub_56A6A8(v8);
  }
  v9 = *((_DWORD *)a2 + 33) | 0x10;
  *((_DWORD *)a2 + 24) = *((_DWORD *)this + 8);
  *((_DWORD *)a2 + 33) = v9;
  v10 = *((_QWORD *)this + 6);
  for ( i = *((_QWORD *)this + 7); i != v10; v10 += 24 )
  {
    if ( !*(_BYTE *)(v10 + 17) )
    {
      v12 = *((_DWORD *)a2 + 13);
      v13 = *((int *)a2 + 12);
      if ( (int)v13 >= v12 )
      {
        if ( v12 == *((_DWORD *)a2 + 14) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve((Caver::Proto::MapNode *)((char *)a2 + 40), v12 + 1);
          v12 = *((_DWORD *)a2 + 13);
        }
        *((_DWORD *)a2 + 13) = v12 + 1;
        v15 = operator new(0x28u);
        Caver::Proto::MapNode_Portal::MapNode_Portal((Caver::Proto::MapNode_Portal *)v15);
        v16 = *((int *)a2 + 12);
        v17 = *((_QWORD *)a2 + 5);
        *((_DWORD *)a2 + 12) = v16 + 1;
        *(_QWORD *)(v17 + 8 * v16) = v15;
      }
      else
      {
        v14 = *((_QWORD *)a2 + 5);
        *((_DWORD *)a2 + 12) = v13 + 1;
        v15 = *(_QWORD *)(v14 + 8 * v13);
      }
      v18 = *(__int64 **)(v15 + 16);
      *(_DWORD *)(v15 + 36) |= 1u;
      if ( v18 == &Caver::Proto::MapNode_Portal::_default_destination_name_ )
      {
        v18 = (__int64 *)operator new(8u);
        *v18 = (__int64)&byte_6FD2F8;
        *(_QWORD *)(v15 + 16) = v18;
      }
      result = sub_56A6A8(v18);
      v19 = *(_DWORD *)(v15 + 36);
      v20 = *(_DWORD *)(v10 + 8);
      v21 = v19 | 2;
      *(_DWORD *)(v15 + 36) = v19 | 2;
      *(_DWORD *)(v15 + 24) = v20;
      v22 = *(_DWORD *)(v10 + 12);
      if ( v22 == 2 || v22 == 1 )
      {
        v21 = v19 | 6;
        *(_DWORD *)(v15 + 36) = v19 | 6;
        *(_DWORD *)(v15 + 28) = v22;
      }
      if ( *(_BYTE *)(v10 + 16) )
      {
        *(_DWORD *)(v15 + 36) = v21 | 8;
        *(_BYTE *)(v15 + 32) = 1;
      }
    }
  }
  if ( *((_BYTE *)this + 72) )
  {
    v23 = *((_DWORD *)a2 + 33);
    *((_BYTE *)a2 + 100) = 1;
    *((_DWORD *)a2 + 33) = v23 | 0x20;
  }
  v24 = *((_DWORD *)this + 22);
  if ( v24 )
  {
    v25 = *((_DWORD *)a2 + 33);
    *((_DWORD *)a2 + 26) = v24;
    *((_DWORD *)a2 + 33) = v25 | 0x40;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 12) - 24LL) )
  {
    v26 = (__int64 *)*((_QWORD *)a2 + 14);
    *((_DWORD *)a2 + 33) |= 0x80u;
    if ( v26 == &Caver::Proto::MapNode::_default_music_ )
    {
      v26 = (__int64 *)operator new(8u);
      *v26 = (__int64)&byte_6FD2F8;
      *((_QWORD *)a2 + 14) = v26;
    }
    result = sub_56A6A8(v26);
  }
  v27 = *((_DWORD *)a2 + 33);
  v28 = *((_BYTE *)this + 104);
  *((_DWORD *)a2 + 33) = v27 | 0x100;
  *((_BYTE *)a2 + 120) = v28;
  v29 = *((_DWORD *)this + 27);
  *((_DWORD *)a2 + 33) = v27 | 0x300;
  *((_DWORD *)a2 + 31) = v29;
  if ( *((_BYTE *)this + 112) )
  {
    *((_DWORD *)a2 + 33) = v27 | 0x700;
    *((_BYTE *)a2 + 128) = 1;
  }
  return result;
}

