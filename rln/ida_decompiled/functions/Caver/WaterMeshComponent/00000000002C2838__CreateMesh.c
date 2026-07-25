/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C2838
 * Mangled: _ZN5Caver18WaterMeshComponent10CreateMeshEv
 * Demangled: Caver::WaterMeshComponent::CreateMesh(void)
 *
 * Callers: 1
 *   0x00000000001F3AA0  Caver::WaterMeshComponent::CreateMesh(void)
 *
 * Callees: 7
 *   0x00000000001F3DB0  Caver::VertexArrayObject::CreateVertexBuffer(int)
 *   0x00000000001F5390  Caver::VertexArrayObject::Reset(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F92C0  Caver::VertexArrayObject::CreateIndexBuffer(Caver::DataType,int)
 *   0x00000000001FA770  Caver::VertexArrayObject::AddArray(uint,int,Caver::DataType,int,void *)
 *   0x00000000001FF490  Caver::TextureMapping::TexCoordForPosition(Caver::Vector3 const&)
 *
 * Referenced strings: 104
 *   insn=0x00000000002C2854 string=0x00000000002C2858 "U"
 *   insn=0x00000000002C2860 string=0x00000000002C2864 "t"
 *   insn=0x00000000002C2870 string=0x00000000002C2874 "i"
 *   insn=0x00000000002C2878 string=0x00000000002C287C "`"
 *   insn=0x00000000002C2878 string=0x00000000001F5390 "P'"
 *   insn=0x00000000002C2888 string=0x00000000002C288C "("
 *   insn=0x00000000002C288C string=0x00000000002C2890 "hF"
 *   insn=0x00000000002C2894 string=0x00000000002C2898 "\ty"
 *   insn=0x00000000002C2898 string=0x00000000002C289C "a"
 *   insn=0x00000000002C28A4 string=0x00000000002C28A8 "iR"
 *   insn=0x00000000002C28A8 string=0x00000000002C28AC "iN"
 *   insn=0x00000000002C28AC string=0x00000000002C28B0 "`J"
 *   insn=0x00000000002C28B0 string=0x00000000002C28B4 "?"
 *   insn=0x00000000002C28B4 string=0x00000000002C28B8 "hv@"
 *   insn=0x00000000002C28B4 string=0x00000000001F3DB0 "P'"
 *   insn=0x00000000002C28B8 string=0x00000000002C28BC "iRA"
 *   insn=0x00000000002C28BC string=0x00000000002C28C0 "jNA"
 *   insn=0x00000000002C28C0 string=0x00000000002C28C4 "a"
 *   insn=0x00000000002C28C4 string=0x00000000002C28C8 "h"
 *   insn=0x00000000002C28CC string=0x00000000002C28D0 "H"
 *   insn=0x00000000002C28D4 string=0x00000000002C28D8 "z"
 *   insn=0x00000000002C28D8 string=0x00000000002C28DC "h~@"
 *   insn=0x00000000002C28D8 string=0x00000000001F92C0 "0'"
 *   insn=0x00000000002C28DC string=0x00000000002C28E0 "e"
 *   insn=0x00000000002C28F4 string=0x00000000002C28F8 "h"
 *   insn=0x00000000002C28FC string=0x00000000002C2900 "hV@"
 *   insn=0x00000000002C28FC string=0x00000000001FA770 "0'"
 *   insn=0x00000000002C2904 string=0x00000000002C2908 "`b"
 *   insn=0x00000000002C2904 string=0x00000000002C291C "h"
 *   insn=0x00000000002C290C string=0x00000000002C2910 "t"
 *   insn=0x00000000002C2910 string=0x00000000002C2914 "hV@"
 *   insn=0x00000000002C2910 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C2938 string=0x00000000002C293C "hV@"
 *   insn=0x00000000002C2940 string=0x00000000002C2944 "`b"
 *   insn=0x00000000002C2948 string=0x00000000002C294C "e"
 *   insn=0x00000000002C294C string=0x00000000002C2950 "hV@"
 *   insn=0x00000000002C2954 string=0x00000000002C2958 "hFA"
 *   insn=0x00000000002C2958 string=0x00000000002C295C ""
 *   insn=0x00000000002C295C string=0x00000000002C2960 "h"
 *   insn=0x00000000002C2960 string=0x00000000002C2964 "i"
 *   insn=0x00000000002C2974 string=0x00000000002C2978 "`"
 *   insn=0x00000000002C2978 string=0x00000000002C297C "a"
 *   insn=0x00000000002C297C string=0x00000000002C2980 "*"
 *   insn=0x00000000002C2980 string=0x00000000002C2984 "V"
 *   insn=0x00000000002C2984 string=0x00000000002C2988 "V"
 *   insn=0x00000000002C298C string=0x00000000002C2990 "V"
 *   insn=0x00000000002C2990 string=0x00000000002C2994 "H"
 *   insn=0x00000000002C2994 string=0x00000000002C2998 "H"
 *   insn=0x00000000002C2998 string=0x00000000002C299C "H"
 *   insn=0x00000000002C299C string=0x00000000002C29A0 "H"
 *   insn=0x00000000002C29A0 string=0x00000000002C29A4 "Y"
 *   insn=0x00000000002C29A4 string=0x00000000002C29A8 "T"
 *   insn=0x00000000002C29A8 string=0x00000000002C2A70 "`JA"
 *   insn=0x00000000002C29C0 string=0x00000000002C29C4 "h"
 *   insn=0x00000000002C29D0 string=0x00000000002C29D4 ""
 *   insn=0x00000000002C29D4 string=0x00000000002C29D8 "\n"
 *   insn=0x00000000002C29D8 string=0x00000000002C29DC "\t"
 *   insn=0x00000000002C29EC string=0x00000000002C29F0 "h"
 *   insn=0x00000000002C29FC string=0x00000000002C2A00 ""
 *   insn=0x00000000002C2A04 string=0x00000000002C2A08 "\n"
 *   insn=0x00000000002C2A08 string=0x00000000002C2A0C "\t"
 *   insn=0x00000000002C2A24 string=0x00000000002C2A28 "h"
 *   insn=0x00000000002C2A34 string=0x00000000002C2A38 ""
 *   insn=0x00000000002C2A3C string=0x00000000002C2A40 "\n"
 *   insn=0x00000000002C2A40 string=0x00000000002C2A44 "\t"
 *   insn=0x00000000002C2A5C string=0x00000000002C2A60 "i"
 *   insn=0x00000000002C2A64 string=0x00000000002C2A68 "(i8"
 *   insn=0x00000000002C2A68 string=0x00000000002C2A6C "hFA"
 *   insn=0x00000000002C2A7C string=0x00000000002C2A80 ") "
 *   insn=0x00000000002C2A8C string=0x00000000002C2A90 "j"
 *   insn=0x00000000002C2A9C string=0x00000000002C2AA0 "J"
 *   insn=0x00000000002C2AA0 string=0x00000000002C2AA4 "m"
 *   insn=0x00000000002C2AA4 string=0x00000000002C2AA8 "n"
 *   insn=0x00000000002C2AA8 string=0x00000000002C2AAC "o"
 *   insn=0x00000000002C2AAC string=0x00000000002C2AB0 "K"
 *   insn=0x00000000002C2AB0 string=0x00000000002C2AB4 "K"
 *   insn=0x00000000002C2AB4 string=0x00000000002C2AB8 "k"
 *   insn=0x00000000002C2ABC string=0x00000000002C2AC0 "N"
 *   insn=0x00000000002C2AC0 string=0x00000000002C2AC4 "M"
 *   insn=0x00000000002C2AC4 string=0x00000000002C2AC8 "O"
 *   insn=0x00000000002C2AC8 string=0x00000000002C2ACC "N\t"
 *   insn=0x00000000002C2ACC string=0x00000000002C2AD0 "J1"
 *   insn=0x00000000002C2AD8 string=0x00000000002C2ADC ""
 *   insn=0x00000000002C2ADC string=0x00000000002C2AE0 "jNA"
 *   insn=0x00000000002C2AE0 string=0x00000000002C2AE4 "h"
 *   insn=0x00000000002C2AE8 string=0x00000000002C2AEC "J"
 *   insn=0x00000000002C2AEC string=0x00000000002C2AF0 "J"
 *   insn=0x00000000002C2AF0 string=0x00000000002C2AF4 "L"
 *   insn=0x00000000002C2AF4 string=0x00000000002C2AF8 "m"
 *   insn=0x00000000002C2AF8 string=0x00000000002C2AFC "N"
 *   insn=0x00000000002C2AFC string=0x00000000002C2B00 "o"
 *   insn=0x00000000002C2B00 string=0x00000000002C2B04 ""
 *   insn=0x00000000002C2B04 string=0x00000000002C2B08 "L"
 *   insn=0x00000000002C2B0C string=0x00000000002C2B10 "n"
 *   insn=0x00000000002C2B10 string=0x00000000002C2B14 "O\t"
 *   insn=0x00000000002C2B18 string=0x00000000002C2B1C "L"
 *   insn=0x00000000002C2B1C string=0x00000000002C2B20 ")"
 *   insn=0x00000000002C2B24 string=0x00000000002C2B28 ""
 *   insn=0x00000000002C2B28 string=0x00000000002C2B2C ""
 *   insn=0x00000000002C2B2C string=0x00000000002C2B30 "J"
 *   insn=0x00000000002C2B30 string=0x00000000002C2B34 "k"
 *   insn=0x00000000002C2B6C string=0x00000000002C2B70 "hFA"
 *   insn=0x00000000002C2B70 string=0x00000000002C2B74 "h"
 *   insn=0x00000000002C2B7C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::WaterMeshComponent::CreateMesh(Caver::WaterMeshComponent *this)
{
  Caver::VertexArrayObject *v2; // x20
  float v3; // s0
  int v4; // w8
  __int64 *result; // x0
  __int64 v6; // x8
  Caver::TextureMapping *v7; // x20
  int v8; // w8
  float v9; // s8
  __int64 v10; // x9
  __int64 v11; // x23
  __int64 v12; // x24
  float v13; // s0
  float v14; // s1
  __int64 v15; // x10
  float v16; // s1
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  __int64 v19; // x8
  float v20; // s0
  int v21; // w10
  __int64 v22; // x8
  float v23; // s0
  int v24; // w10
  __int64 v25; // x9
  int v26; // w11
  __int64 v27; // x12
  _WORD *v28; // x10
  __int16 v29; // w13
  __int16 v30; // w14
  __int16 v31; // w15
  __int64 v32; // x8
  int v33; // w11
  int v34; // w10
  unsigned __int64 v35; // [xsp+0h] [xbp-60h] BYREF
  int v36; // [xsp+8h] [xbp-58h]
  __int64 v37[2]; // [xsp+10h] [xbp-50h] BYREF

  v2 = (Caver::WaterMeshComponent *)((char *)this + 224);
  v37[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_BYTE *)this + 296) = 1;
  Caver::VertexArrayObject::Reset((Caver::WaterMeshComponent *)((char *)this + 224));
  v3 = *((float *)this + 36);
  v4 = llroundf(v3 / 20.0);
  *((_DWORD *)this + 81) = v4;
  *((_DWORD *)this + 84) = 2 * v4;
  *((_DWORD *)this + 83) = 2 * v4;
  *((float *)this + 82) = v3 / (float)v4;
  Caver::VertexArrayObject::CreateVertexBuffer(v2, (v4 << 7) + 128);
  *((_QWORD *)this + 38) = *((_QWORD *)this + 29);
  Caver::VertexArrayObject::CreateIndexBuffer();
  *((_QWORD *)this + 39) = *((_QWORD *)this + 31);
  Caver::VertexArrayObject::AddArray();
  if ( !*((_QWORD *)this + 21) )
  {
    result = (__int64 *)Caver::ComponentOutletBase::Connect((Caver::WaterMeshComponent *)((char *)this + 152), this);
    if ( !*((_QWORD *)this + 21) )
    {
      v7 = 0;
      v8 = *((_DWORD *)this + 81);
      if ( v8 < 0 )
        return result;
      goto LABEL_6;
    }
  }
  result = (__int64 *)Caver::VertexArrayObject::AddArray();
  v6 = *((_QWORD *)this + 21);
  if ( !v6 )
  {
    result = (__int64 *)Caver::ComponentOutletBase::Connect((Caver::WaterMeshComponent *)((char *)this + 152), this);
    v6 = *((_QWORD *)this + 21);
  }
  v7 = (Caver::TextureMapping *)(v6 + 120);
  v8 = *((_DWORD *)this + 81);
  if ( (v8 & 0x80000000) == 0 )
  {
LABEL_6:
    v9 = *((float *)this + 34);
    v10 = *((_QWORD *)this + 38);
    v11 = -1;
    v12 = 120;
    do
    {
      v13 = *((float *)this + 35);
      v14 = *((float *)this + 37);
      v15 = v10 + v12;
      *(_DWORD *)(v15 - 112) = 1109393408;
      *(_DWORD *)(v15 - 80) = 1109393408;
      v16 = v13 + v14;
      *(_DWORD *)(v15 - 48) = 1109393408;
      *(float *)(v15 - 120) = v9;
      *(float *)(v15 - 116) = v13;
      *(float *)(v15 - 88) = v9;
      *(float *)(v15 - 84) = v16;
      *(float *)(v15 - 56) = v9;
      *(float *)(v15 - 52) = v16;
      *(float *)(v15 - 24) = v9;
      *(float *)(v15 - 20) = v16;
      *(_DWORD *)(v15 - 16) = -1046478848;
      if ( v7 )
      {
        v35 = __PAIR64__(LODWORD(v13), LODWORD(v9));
        v36 = 0;
        Caver::TextureMapping::TexCoordForPosition(v37, v7, (const Caver::Vector3 *)&v35);
        v17 = *((_QWORD *)this + 38) + v12;
        v18 = *(_QWORD *)(v17 - 88);
        *(_QWORD *)(v17 - 96) = v37[0];
        v36 = 0;
        v35 = v18;
        Caver::TextureMapping::TexCoordForPosition(v37, v7, (const Caver::Vector3 *)&v35);
        v19 = *((_QWORD *)this + 38) + v12;
        v20 = *(float *)(v19 - 48);
        v21 = *(_DWORD *)(v19 - 56);
        *(_QWORD *)(v19 - 64) = v37[0];
        LODWORD(v35) = v21;
        *((float *)&v35 + 1) = -v20;
        v36 = 0;
        Caver::TextureMapping::TexCoordForPosition(v37, v7, (const Caver::Vector3 *)&v35);
        v22 = *((_QWORD *)this + 38) + v12;
        v23 = *(float *)(v22 - 16);
        v24 = *(_DWORD *)(v22 - 24);
        *(_QWORD *)(v22 - 32) = v37[0];
        LODWORD(v35) = v24;
        *((float *)&v35 + 1) = -v23;
        v36 = 0;
        result = Caver::TextureMapping::TexCoordForPosition(v37, v7, (const Caver::Vector3 *)&v35);
        v10 = *((_QWORD *)this + 38);
        *(_QWORD *)(v10 + v12) = v37[0];
        v8 = *((_DWORD *)this + 81);
      }
      ++v11;
      v12 += 128;
      v9 = v9 + *((float *)this + 82);
    }
    while ( v11 < v8 );
    if ( v8 >= 1 )
    {
      v25 = (unsigned int)v8;
      v26 = 4;
      v27 = (unsigned int)v8;
      v28 = (_WORD *)(*((_QWORD *)this + 39) + 6LL);
      do
      {
        v29 = v26 - 4;
        v30 = v26 - 3;
        v31 = v26 + 1;
        *(v28 - 1) = v26;
        *v28 = v26;
        v26 += 4;
        --v27;
        *(v28 - 3) = v30;
        *(v28 - 2) = v29;
        v28[1] = v31;
        v28[2] = v30;
        v28 += 6;
      }
      while ( v27 );
      v32 = *((_QWORD *)this + 39);
      v33 = 7;
      v34 = 3 * *((_DWORD *)this + 83) + 5;
      do
      {
        *(_WORD *)(v32 + 2LL * (v34 - 5)) = v33 - 4;
        *(_WORD *)(v32 + 2LL * (v34 - 4)) = v33 - 5;
        *(_WORD *)(v32 + 2LL * (v34 - 3)) = v33 - 1;
        --v25;
        *(_WORD *)(v32 + 2LL * (v34 - 2)) = v33 - 1;
        *(_WORD *)(v32 + 2LL * (v34 - 1)) = v33;
        *(_WORD *)(v32 + 2LL * v34) = v33 - 4;
        v34 += 6;
        v33 += 4;
      }
      while ( v25 );
    }
  }
  return result;
}

