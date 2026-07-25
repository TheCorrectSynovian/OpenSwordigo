/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000276128
 * Mangled: _ZNK5Caver17ItemDropComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ItemDropComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5910  Caver::Proto::ItemDropComponent::default_instance(void)
 *   0x00000000001F5DD0  Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(void)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000002763D8  Caver::ItemDropComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 64
 *   insn=0x0000000000276148 string=0x000000000027614C "u$"
 *   insn=0x000000000027614C string=0x0000000000276150 "h#"
 *   insn=0x0000000000276150 string=0x0000000000276154 "AD"
 *   insn=0x0000000000276160 string=0x00000000001F5910 "P'"
 *   insn=0x0000000000276164 string=0x0000000000276168 "b"
 *   insn=0x0000000000276178 string=0x00000000001F7570 "0'"
 *   insn=0x0000000000276184 string=0x0000000000276188 ""
 *   insn=0x0000000000276188 string=0x000000000027618C "H"
 *   insn=0x000000000027618C string=0x0000000000276190 "i#"
 *   insn=0x0000000000276198 string=0x000000000027619C ")mF"
 *   insn=0x000000000027619C string=0x00000000002761A0 ""
 *   insn=0x00000000002761B0 string=0x00000000002761B4 ""
 *   insn=0x00000000002761B4 string=0x00000000002761B8 "h#"
 *   insn=0x00000000002761B4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002761B8 string=0x00000000002761BC ""
 *   insn=0x00000000002761BC string=0x00000000002761C0 "a"
 *   insn=0x00000000002761C0 string=0x00000000002761C4 ""
 *   insn=0x00000000002761CC string=0x00000000002761D0 "6"
 *   insn=0x00000000002761D8 string=0x00000000002761DC ""
 *   insn=0x00000000002761DC string=0x00000000002761E0 "H"
 *   insn=0x00000000002761E0 string=0x0000000000276228 "h"
 *   insn=0x00000000002761EC string=0x00000000002761F0 ")"
 *   insn=0x00000000002761F0 string=0x00000000002761F4 ""
 *   insn=0x0000000000276208 string=0x000000000027620C "h#"
 *   insn=0x000000000027620C string=0x0000000000276210 ""
 *   insn=0x0000000000276210 string=0x0000000000276214 "a"
 *   insn=0x0000000000276214 string=0x0000000000276218 ""
 *   insn=0x0000000000276220 string=0x0000000000276224 "!"
 *   insn=0x0000000000276230 string=0x0000000000276234 "h"
 *   insn=0x0000000000276234 string=0x0000000000276238 ")"
 *   insn=0x0000000000276240 string=0x0000000000276244 "h"
 *   insn=0x0000000000276250 string=0x0000000000276254 "h#"
 *   insn=0x0000000000276254 string=0x0000000000276258 "Z"
 *   insn=0x0000000000276258 string=0x000000000027625C ""
 *   insn=0x0000000000276260 string=0x0000000000276264 "{"
 *   insn=0x0000000000276278 string=0x000000000027627C ")}@"
 *   insn=0x000000000027627C string=0x0000000000276280 "?"
 *   insn=0x0000000000276288 string=0x000000000027628C "*"
 *   insn=0x0000000000276298 string=0x00000000002762E4 "hJ@"
 *   insn=0x00000000002762A4 string=0x00000000002762B8 ""
 *   insn=0x00000000002762B0 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000002762CC string=0x00000000001F5DD0 "P'"
 *   insn=0x00000000002762D4 string=0x00000000002762D8 "\n"
 *   insn=0x00000000002762DC string=0x00000000002762E0 "6y("
 *   insn=0x00000000002762F0 string=0x00000000002762F4 "("
 *   insn=0x0000000000276318 string=0x000000000027631C "hJ@"
 *   insn=0x0000000000276324 string=0x0000000000276328 ""
 *   insn=0x0000000000276328 string=0x000000000027632C ")"
 *   insn=0x0000000000276344 string=0x0000000000276348 "h#"
 *   insn=0x0000000000276348 string=0x000000000027634C ""
 *   insn=0x000000000027634C string=0x0000000000276350 "a"
 *   insn=0x0000000000276350 string=0x0000000000276354 ""
 *   insn=0x0000000000276364 string=0x0000000000276368 "iJ@"
 *   insn=0x0000000000276368 string=0x000000000027636C "9"
 *   insn=0x000000000027636C string=0x0000000000276370 "\n"
 *   insn=0x0000000000276370 string=0x0000000000276374 ")"
 *   insn=0x0000000000276378 string=0x000000000027637C "*\t@"
 *   insn=0x000000000027637C string=0x0000000000276380 ""
 *   insn=0x0000000000276384 string=0x0000000000276388 "\t"
 *   insn=0x000000000027638C string=0x0000000000276390 ")"
 *   insn=0x0000000000276398 string=0x000000000027639C "h"
 *   insn=0x000000000027639C string=0x00000000002763A0 "?"
 *   insn=0x00000000002763CC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002763D0 string=0x00000000002763D4 "<-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ItemDropComponent::SaveToProtobufMessage(
        Caver::ItemDropComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::ItemDropComponent *v3; // x0
  __int64 result; // x0
  __int64 v5; // x20
  __int64 *v6; // x0
  __int64 *v7; // x0
  int v8; // w9
  char v9; // w8
  __int64 v10; // x24
  __int64 v11; // x25
  int v12; // w8
  __int64 v13; // x9
  __int64 v14; // x8
  __int64 v15; // x22
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 *v18; // x0
  __int64 *v19; // x0
  int v20; // w8
  __int64 v21; // x9
  __int64 v22; // x10

  v3 = (Caver::Proto::ItemDropComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::ItemDropComponent::default_instance(v3);
  result = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = result;
  if ( *(_QWORD *)(*((_QWORD *)this + 15) - 24LL) )
  {
    v6 = *(__int64 **)(result + 16);
    *(_DWORD *)(v5 + 92) |= 1u;
    if ( v6 == &Caver::Proto::ItemDropComponent::_default_item_name_ )
    {
      v6 = (__int64 *)operator new(8u);
      *v6 = (__int64)&byte_6FD2F8;
      *(_QWORD *)(v5 + 16) = v6;
    }
    result = sub_56A6A8(v6);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 16) - 24LL) )
  {
    v7 = *(__int64 **)(v5 + 24);
    *(_DWORD *)(v5 + 92) |= 2u;
    if ( v7 == &Caver::Proto::ItemDropComponent::_default_item_identifier_ )
    {
      v7 = (__int64 *)operator new(8u);
      *v7 = (__int64)&byte_6FD2F8;
      *(_QWORD *)(v5 + 24) = v7;
    }
    result = sub_56A6A8(v7);
  }
  v8 = *(_DWORD *)(v5 + 92);
  *(_BYTE *)(v5 + 88) = *((_BYTE *)this + 112);
  v9 = *((_BYTE *)this + 113);
  *(_DWORD *)(v5 + 92) = v8 | 0x18;
  *(_BYTE *)(v5 + 89) = v9;
  if ( *((int *)this + 34) >= 1 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = *(_DWORD *)(v5 + 44);
      v13 = *(int *)(v5 + 40);
      if ( (int)v13 >= v12 )
      {
        if ( v12 == *(_DWORD *)(v5 + 48) )
        {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::internal::RepeatedPtrFieldBase *)(v5 + 32),
            v12 + 1);
          v12 = *(_DWORD *)(v5 + 44);
        }
        *(_DWORD *)(v5 + 44) = v12 + 1;
        v15 = operator new(0x30u);
        Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry((Caver::Proto::ItemDropComponent_ItemDropEntry *)v15);
        v16 = *(int *)(v5 + 40);
        v17 = *(_QWORD *)(v5 + 32);
        *(_DWORD *)(v5 + 40) = v16 + 1;
        *(_QWORD *)(v17 + 8 * v16) = v15;
      }
      else
      {
        v14 = *(_QWORD *)(v5 + 32);
        *(_DWORD *)(v5 + 40) = v13 + 1;
        v15 = *(_QWORD *)(v14 + 8 * v13);
      }
      v18 = *(__int64 **)(v15 + 16);
      *(_DWORD *)(v15 + 44) |= 1u;
      if ( v18 == &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_template_name_ )
      {
        v18 = (__int64 *)operator new(8u);
        *v18 = (__int64)&byte_6FD2F8;
        *(_QWORD *)(v15 + 16) = v18;
      }
      sub_56A6A8(v18);
      v19 = *(__int64 **)(v15 + 24);
      *(_DWORD *)(v15 + 44) |= 2u;
      if ( v19 == &Caver::Proto::ItemDropComponent_ItemDropEntry::_default_item_identifier_ )
      {
        v19 = (__int64 *)operator new(8u);
        *v19 = (__int64)&byte_6FD2F8;
        *(_QWORD *)(v15 + 24) = v19;
      }
      result = sub_56A6A8(v19);
      v20 = *(_DWORD *)(v15 + 44);
      ++v11;
      v21 = *((_QWORD *)this + 18) + v10;
      *(_DWORD *)(v15 + 44) = v20 | 4;
      v22 = *(_QWORD *)(v21 + 16);
      *(_DWORD *)(v15 + 44) = v20 | 0xC;
      *(_QWORD *)(v15 + 32) = v22;
      v10 += 32;
      *(_DWORD *)(v15 + 40) = *(_DWORD *)(v21 + 24);
      *(_DWORD *)(v15 + 44) = v20 | 0x1C;
    }
    while ( v11 < *((int *)this + 34) );
  }
  return result;
}

