/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C81BC
 * Mangled: _ZN5Caver6Sprite15InitWithTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_9RectangleE
 * Demangled: Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x00000000001FD5B0  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Callees: 2
 *   0x00000000001F4A30  Caver::Sprite::CreateVertexData(int,Caver::Vector2 const*,int,ushort *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 34
 *   insn=0x00000000004C81CC string=0x00000000004C81D0 "V"
 *   insn=0x00000000004C81EC string=0x00000000004C81F0 "\t\t@"
 *   insn=0x00000000004C81EC string=0x00000000004C81FC "`"
 *   insn=0x00000000004C81F0 string=0x00000000004C81F4 ")"
 *   insn=0x00000000004C81F4 string=0x00000000004C81F8 "\t\t"
 *   insn=0x00000000004C81FC string=0x00000000004C8200 "h"
 *   insn=0x00000000004C8204 string=0x00000000004C8208 "@"
 *   insn=0x00000000004C8208 string=0x00000000004C820C ""
 *   insn=0x00000000004C820C string=0x00000000004C8210 ""
 *   insn=0x00000000004C8214 string=0x00000000004C8218 ""
 *   insn=0x00000000004C8218 string=0x00000000004C821C ""
 *   insn=0x00000000004C8224 string=0x00000000004C8228 "H"
 *   insn=0x00000000004C822C string=0x0000000000583734 "o"
 *   insn=0x00000000004C8230 string=0x00000000004C8234 "!5G"
 *   insn=0x00000000004C8238 string=0x00000000004C823C ""
 *   insn=0x00000000004C823C string=0x00000000004C825C "\t"
 *   insn=0x00000000004C8240 string=0x00000000004C8244 "`"
 *   insn=0x00000000004C8244 string=0x00000000004C8248 "h&A)`"
 *   insn=0x00000000004C8248 string=0x00000000004C824C "`"
 *   insn=0x00000000004C8250 string=0x00000000004C8254 """
 *   insn=0x00000000004C8254 string=0x00000000004C8258 ""
 *   insn=0x00000000004C8258 string=0x00000000004C8284 "j"
 *   insn=0x00000000004C8260 string=0x00000000004C8264 " "
 *   insn=0x00000000004C826C string=0x00000000004C8270 """"
 *   insn=0x00000000004C8270 string=0x00000000004C8274 "i""
 *   insn=0x00000000004C8274 string=0x00000000004C8278 "h"
 *   insn=0x00000000004C8278 string=0x00000000004C827C "I"
 *   insn=0x00000000004C827C string=0x00000000004C8280 "c\n"
 *   insn=0x00000000004C8290 string=0x00000000004C8294 "H\t@"
 *   insn=0x00000000004C8294 string=0x00000000004C8298 "I"
 *   insn=0x00000000004C8298 string=0x00000000004C829C "`( "
 *   insn=0x00000000004C829C string=0x00000000004C82A0 "A(!"
 *   insn=0x00000000004C82CC string=0x00000000001F4A30 "P'"
 *   insn=0x00000000004C82F4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::Sprite::InitWithTexture(Caver::Sprite *this, __int64 *a2, __int64 a3)
{
  __int64 v6; // x8
  _DWORD *result; // x0
  int v8; // w8
  __int64 v9; // x8
  float v10; // w8
  float v11; // w9
  float v12; // s0
  float v13; // s1
  float v14; // s3
  float v15; // s2
  unsigned __int16 v16[4]; // [xsp+8h] [xbp-58h] BYREF
  int v17; // [xsp+10h] [xbp-50h]
  _DWORD v18[8]; // [xsp+18h] [xbp-48h] BYREF
  __int64 v19; // [xsp+38h] [xbp-28h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v6 + 8);
  result = *(_DWORD **)this;
  *(_QWORD *)this = v6;
  if ( result )
  {
    v8 = result[2] - 1;
    result[2] = v8;
    if ( !v8 )
      result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  v9 = *a2;
  if ( *a2 )
  {
    if ( *(float *)(a3 + 8) <= 0.001 )
    {
      v12 = *(float *)(v9 + 84);
      v13 = *(float *)(v9 + 88);
      v14 = v12 * -0.5;
      v15 = v13 * -0.5;
      *((float *)this + 4) = v12;
      *((float *)this + 5) = v13;
      v10 = v12 * -0.5;
      v11 = v13 * -0.5;
      *((float *)this + 2) = v12 * -0.5;
      *((float *)this + 3) = v13 * -0.5;
    }
    else
    {
      *(_OWORD *)((char *)this + 8) = *(_OWORD *)a3;
      v10 = *((float *)this + 2);
      v11 = *((float *)this + 3);
      v12 = *((float *)this + 4);
      v13 = *((float *)this + 5);
      v14 = v10;
      v15 = v11;
    }
    *(float *)v18 = v10;
    *(float *)&v18[1] = v11;
    *(float *)&v18[3] = v11;
    *(float *)&v18[4] = v10;
    *(float *)&v18[2] = v14 + v12;
    *(float *)&v18[5] = v15 + v13;
    *(float *)&v18[6] = v14 + v12;
    *(float *)&v18[7] = v15 + v13;
    v17 = 65538;
    *(_QWORD *)v16 = 0x3000200010000LL;
    return (_DWORD *)Caver::Sprite::CreateVertexData(this, 6, (const Caver::Vector2 *)v18, 2, v16);
  }
  return result;
}

