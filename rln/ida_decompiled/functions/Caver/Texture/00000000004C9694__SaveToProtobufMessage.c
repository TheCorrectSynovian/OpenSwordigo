/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C9694
 * Mangled: _ZNK5Caver7Texture21SaveToProtobufMessageEPNS_5Proto7TextureE
 * Demangled: Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *
 * Callers: 2
 *   0x00000000001FF060  Caver::Texture::SaveToProtobufMessage(Caver::Proto::Texture *)
 *   0x00000000004C8BF4  Caver::Texture::LoadFromProtobufMessage(Caver::Proto::Texture const&)
 *
 * Callees: 12
 *   0x00000000001F5050  Caver::Proto::Texture_Subtexture::Texture_Subtexture(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F91D0  Caver::ProtobufValueFromImageType(Caver::ImageType)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FADC0  Caver::TextureConversionInfo::SaveToProtobufMessage(Caver::Proto::Texture_ConversionInfo *)
 *   0x00000000001FB070  Caver::Proto::Rectangle::Rectangle(void)
 *   0x00000000001FEC50  Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo(void)
 *   0x0000000000201D40  Caver::ProtobufValueFromPixelFormat(Caver::PixelFormat)
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 64
 *   insn=0x00000000004C96B8 string=0x00000000004C96BC "hj@"
 *   insn=0x00000000004C96BC string=0x00000000004C96C0 "`\n@"
 *   insn=0x00000000004C96C0 string=0x00000000004C96C4 ")"
 *   insn=0x00000000004C96C8 string=0x00000000004C96CC ""
 *   insn=0x00000000004C96CC string=0x00000000004C96D0 "hj"
 *   insn=0x00000000004C96E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C96E4 string=0x00000000004C96E8 ""
 *   insn=0x00000000004C96E8 string=0x00000000004C96EC "a"
 *   insn=0x00000000004C96EC string=0x00000000004C96F0 ""
 *   insn=0x00000000004C96F0 string=0x00000000004C96F4 "`\n"
 *   insn=0x00000000004C9704 string=0x00000000004C9708 "hj@"
 *   insn=0x00000000004C9704 string=0x00000000001F91D0 "0'"
 *   insn=0x00000000004C9708 string=0x00000000004C970C "`Z"
 *   insn=0x00000000004C970C string=0x00000000004C9710 ""
 *   insn=0x00000000004C9710 string=0x00000000004C9714 "hj"
 *   insn=0x00000000004C971C string=0x00000000004C9720 "hj@"
 *   insn=0x00000000004C9720 string=0x00000000004C9724 "`"
 *   insn=0x00000000004C9724 string=0x00000000004C9728 ""
 *   insn=0x00000000004C9728 string=0x00000000004C972C "hj"
 *   insn=0x00000000004C9734 string=0x00000000004C9738 "`\t"
 *   insn=0x00000000004C9740 string=0x00000000004C9744 "Z"
 *   insn=0x00000000004C9744 string=0x00000000004C9748 ""
 *   insn=0x00000000004C9748 string=0x00000000004C974C "u"
 *   insn=0x00000000004C974C string=0x00000000004C9750 "a"
 *   insn=0x00000000004C9750 string=0x00000000004C9754 "i"E))}@"
 *   insn=0x00000000004C9754 string=0x00000000004C9758 ")}@"
 *   insn=0x00000000004C9758 string=0x00000000004C975C "?"
 *   insn=0x00000000004C9760 string=0x00000000004C9764 "h"
 *   insn=0x00000000004C9760 string=0x00000000004C9778 "i2@"
 *   insn=0x00000000004C9764 string=0x00000000004C9768 "*"
 *   insn=0x00000000004C9768 string=0x00000000004C976C "j*"
 *   insn=0x00000000004C9774 string=0x00000000004C97C0 ""
 *   insn=0x00000000004C9780 string=0x00000000004C9794 ""
 *   insn=0x00000000004C9788 string=0x00000000004C978C "e"
 *   insn=0x00000000004C978C string=0x00000000004C9790 "h.@"
 *   insn=0x00000000004C978C string=0x00000000001FAD20 "0'"
 *   insn=0x00000000004C9798 string=0x00000000004C979C "h."
 *   insn=0x00000000004C97A4 string=0x00000000004C97A8 "*"
 *   insn=0x00000000004C97A8 string=0x00000000004C97AC "h*"
 *   insn=0x00000000004C97A8 string=0x00000000001F5050 "P'"
 *   insn=0x00000000004C97AC string=0x00000000004C97B0 "i"
 *   insn=0x00000000004C97B0 string=0x00000000004C97B4 "\n"
 *   insn=0x00000000004C97B4 string=0x00000000004C97B8 "j*"
 *   insn=0x00000000004C97B8 string=0x00000000004C97BC "6y("
 *   insn=0x00000000004C97CC string=0x00000000004C97D0 "("
 *   insn=0x00000000004C97E4 string=0x00000000004C97E8 ""
 *   insn=0x00000000004C9800 string=0x00000000004C9804 ""
 *   insn=0x00000000004C9814 string=0x00000000004C9818 "r"
 *   insn=0x00000000004C9820 string=0x00000000001FB070 "0'"
 *   insn=0x00000000004C9824 string=0x00000000004C9828 ""
 *   insn=0x00000000004C9834 string=0x00000000004C9838 "?"
 *   insn=0x00000000004C9840 string=0x00000000004C9844 "J"
 *   insn=0x00000000004C9850 string=0x00000000004C9854 "m@"
 *   insn=0x00000000004C9854 string=0x00000000004C9858 ")"
 *   insn=0x00000000004C9868 string=0x00000000004C986C "hj@"
 *   insn=0x00000000004C986C string=0x00000000004C9870 "u2@"
 *   insn=0x00000000004C9870 string=0x00000000004C9874 ""
 *   insn=0x00000000004C9874 string=0x00000000004C9878 "hj"
 *   insn=0x00000000004C9880 string=0x00000000004C9884 "W"
 *   insn=0x00000000004C988C string=0x00000000004C9890 "u2"
 *   insn=0x00000000004C98B0 string=0x00000000004C98B4 "C"
 *   insn=0x00000000004C98B4 string=0x00000000001FADC0 "0'"
 *   insn=0x00000000004C98DC string=0x00000000004C98F4 "o"
 *   insn=0x00000000004C98F4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Texture::SaveToProtobufMessage(Caver::Texture *this, Caver::Proto::Texture *a2)
{
  __int64 *v4; // x0
  int v5; // w0
  int v6; // w8
  int v7; // w0
  int v8; // w8
  __int64 *v9; // x24
  __int64 *i; // x25
  int v11; // w8
  __int64 v12; // x9
  __int64 v13; // x8
  __int64 v14; // x22
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 *v17; // x0
  __int64 v18; // x28
  __int64 v19; // x23
  __int64 v20; // x8
  int v21; // w10
  __int64 v22; // x9
  Caver::TextureConversionInfo *v23; // x20
  Caver::Proto::Texture_ConversionInfo *v24; // x21

  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 26) |= 1u;
  if ( v4 == &Caver::Proto::Texture::_default_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  sub_56A6A8(v4);
  v5 = Caver::ProtobufValueFromImageType();
  v6 = *((_DWORD *)a2 + 26);
  *((_DWORD *)a2 + 22) = v5;
  *((_DWORD *)a2 + 26) = v6 | 8;
  v7 = Caver::ProtobufValueFromPixelFormat();
  v8 = *((_DWORD *)a2 + 26);
  *((_DWORD *)a2 + 6) = v7;
  *((_DWORD *)a2 + 26) = v8 | 2;
  v9 = (__int64 *)*((_QWORD *)this + 15);
  for ( i = (__int64 *)*((_QWORD *)this + 16); i != v9; *(_DWORD *)(v14 + 36) = v22 )
  {
    v11 = *((_DWORD *)a2 + 11);
    v12 = *((int *)a2 + 10);
    if ( (int)v12 >= v11 )
    {
      if ( v11 == *((_DWORD *)a2 + 12) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve((Caver::Proto::Texture *)((char *)a2 + 32), v11 + 1);
        v11 = *((_DWORD *)a2 + 11);
      }
      *((_DWORD *)a2 + 11) = v11 + 1;
      v14 = operator new(0x28u);
      Caver::Proto::Texture_Subtexture::Texture_Subtexture((Caver::Proto::Texture_Subtexture *)v14);
      v15 = *((int *)a2 + 10);
      v16 = *((_QWORD *)a2 + 4);
      *((_DWORD *)a2 + 10) = v15 + 1;
      *(_QWORD *)(v16 + 8 * v15) = v14;
    }
    else
    {
      v13 = *((_QWORD *)a2 + 4);
      *((_DWORD *)a2 + 10) = v12 + 1;
      v14 = *(_QWORD *)(v13 + 8 * v12);
    }
    v17 = *(__int64 **)(v14 + 16);
    *(_DWORD *)(v14 + 36) |= 1u;
    if ( v17 == &Caver::Proto::Texture_Subtexture::_default_name_ )
    {
      v17 = (__int64 *)operator new(8u);
      *v17 = (__int64)&byte_6FD2F8;
      *(_QWORD *)(v14 + 16) = v17;
    }
    sub_56A6A8(v17);
    v18 = *v9;
    v19 = *(_QWORD *)(v14 + 24);
    *(_DWORD *)(v14 + 36) |= 2u;
    v20 = v18;
    if ( !v19 )
    {
      v19 = operator new(0x20u);
      Caver::Proto::Rectangle::Rectangle((Caver::Proto::Rectangle *)v19);
      *(_QWORD *)(v14 + 24) = v19;
      v20 = *v9;
    }
    v21 = *(_DWORD *)(v19 + 28);
    ++v9;
    *(_QWORD *)(v19 + 12) = *(_QWORD *)(v18 + 76);
    v22 = *(_QWORD *)(v18 + 84);
    *(_DWORD *)(v19 + 28) = v21 | 0xF;
    *(_QWORD *)(v19 + 20) = v22;
    LODWORD(v22) = *(_DWORD *)(v14 + 36) | 4;
    *(_DWORD *)(v14 + 32) = *(_DWORD *)(v20 + 108);
  }
  v23 = (Caver::TextureConversionInfo *)*((_QWORD *)this + 18);
  if ( v23 )
  {
    v24 = (Caver::Proto::Texture_ConversionInfo *)*((_QWORD *)a2 + 12);
    *((_DWORD *)a2 + 26) |= 0x10u;
    if ( !v24 )
    {
      v24 = (Caver::Proto::Texture_ConversionInfo *)operator new(0x20u);
      Caver::Proto::Texture_ConversionInfo::Texture_ConversionInfo(v24);
      *((_QWORD *)a2 + 12) = v24;
    }
    Caver::TextureConversionInfo::SaveToProtobufMessage(v23, v24);
  }
}

