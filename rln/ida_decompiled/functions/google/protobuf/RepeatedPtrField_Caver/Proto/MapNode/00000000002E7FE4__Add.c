/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E7FE4
 * Mangled: _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto7MapNodeEE3AddEv
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add(void)
 *
 * Callers: 1
 *   0x00000000001F8240  google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add(void)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *
 * Referenced strings: 26
 *   insn=0x00000000002E7FF0 string=0x00000000002E7FF4 "t"A)"
 *   insn=0x00000000002E7FFC string=0x00000000002E8000 "h"
 *   insn=0x00000000002E7FFC string=0x00000000002E8018 "i"
 *   insn=0x00000000002E8008 string=0x00000000002E800C "j\n"
 *   insn=0x00000000002E8010 string=0x00000000002E8014 "+"
 *   insn=0x00000000002E8020 string=0x00000000002E8034 ""
 *   insn=0x00000000002E8028 string=0x00000000002E802C "=K"
 *   insn=0x00000000002E802C string=0x00000000002E8030 "t"A)"
 *   insn=0x00000000002E802C string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002E8038 string=0x00000000002E803C "h"
 *   insn=0x00000000002E803C string=0x00000000002E8040 "h5"
 *   insn=0x00000000002E8040 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E8044 string=0x00000000002E8048 "\t"
 *   insn=0x00000000002E8048 string=0x00000000002E804C "QD"
 *   insn=0x00000000002E804C string=0x00000000002E8050 "\t"
 *   insn=0x00000000002E8058 string=0x00000000002E805C "\t8"
 *   insn=0x00000000002E8060 string=0x00000000002E8064 ")=D"
 *   insn=0x00000000002E8068 string=0x00000000002E806C "A"
 *   insn=0x00000000002E806C string=0x00000000002E8070 " "
 *   insn=0x00000000002E8074 string=0x00000000002E8078 ")"
 *   insn=0x00000000002E8078 string=0x00000000002E807C "\t8"
 *   insn=0x00000000002E8080 string=0x00000000002E8084 ")"
 *   insn=0x00000000002E8090 string=0x00000000002E8094 " "
 *   insn=0x00000000002E80A0 string=0x00000000002E80A4 ""
 *   insn=0x00000000002E80AC string=0x00000000002E80B0 "h"
 *   insn=0x00000000002E80B4 string=0x00000000002E80B8 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall google::protobuf::RepeatedPtrField<Caver::Proto::MapNode>::Add(
        google::protobuf::internal::RepeatedPtrFieldBase *this)
{
  int v2; // w8
  int v3; // w20
  __int64 v4; // x0
  __n128 result; // q0
  __int64 v6; // x8

  v3 = *((_DWORD *)this + 2);
  v2 = *((_DWORD *)this + 3);
  if ( v3 >= v2 )
  {
    if ( v2 == *((_DWORD *)this + 4) )
    {
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, v2 + 1);
      v3 = *((_DWORD *)this + 2);
      v2 = *((_DWORD *)this + 3);
    }
    *((_DWORD *)this + 3) = v2 + 1;
    v4 = operator new(0x88u);
    *(_QWORD *)(v4 + 40) = v4 + 64;
    *(_QWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 56) = 4;
    *(_QWORD *)(v4 + 16) = 0;
    result.n128_u64[0] = (unsigned __int64)&Caver::Proto::MapNode::_default_level_name_;
    *(_QWORD *)(v4 + 112) = &Caver::Proto::MapNode::_default_music_;
    *(_DWORD *)(v4 + 96) = 0;
    *(_BYTE *)(v4 + 100) = 0;
    *(_DWORD *)(v4 + 104) = 0;
    result.n128_u64[1] = (unsigned __int64)&Caver::Proto::MapNode::_default_title_;
    *(_BYTE *)(v4 + 120) = 0;
    *(_DWORD *)(v4 + 124) = 0;
    *(_BYTE *)(v4 + 128) = 0;
    *(_QWORD *)v4 = off_6C6688;
    *(__n128 *)(v4 + 24) = result;
    *(_DWORD *)(v4 + 132) = 0;
    v6 = *(_QWORD *)this;
    *((_DWORD *)this + 2) = v3 + 1;
    *(_QWORD *)(v6 + 8LL * v3) = v4;
  }
  else
  {
    *((_DWORD *)this + 2) = v3 + 1;
  }
  return result;
}

