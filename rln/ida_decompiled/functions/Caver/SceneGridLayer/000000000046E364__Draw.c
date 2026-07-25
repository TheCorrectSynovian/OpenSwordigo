/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046E364
 * Mangled: _ZN5Caver14SceneGridLayer4DrawEPNS_16RenderingContextERKNS_7Matrix4E
 * Demangled: Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callers: 1
 *   0x00000000001F5F90  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 19
 *   0x00000000001F3420  Caver::RenderingContext::SetTexturingEnabled(bool)
 *   0x00000000001F3B30  Caver::RenderingContext::DrawArrays(int,int,int)
 *   0x00000000001F5200  Caver::FontText::Clear(void)
 *   0x00000000001F59D0  Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *   0x00000000001F5ED0  Caver::RenderingContext::UseProgram(uint)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8D70  Caver::SceneGridLayer::CreateVertexData(void)
 *   0x00000000001F9CD0  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000001FC610  Caver::FontText::Draw(Caver::RenderingContext *)
 *   0x00000000001FE920  Caver::RenderingContext::SetVertexAttribPointer(uint,int,Caver::DataType,int,void const*)
 *   0x00000000001FEBA0  Caver::RenderingContext::SetMatrix(Caver::Matrix4 const&)
 *   0x00000000001FFE90  C_Matrix4Mul(float const*,float const*,float *)
 *   0x0000000000200F60  Caver::Font::SystemFont(void)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 121
 *   insn=0x000000000046E388 string=0x000000000046E38C "Y"
 *   insn=0x000000000046E38C string=0x000000000046E390 "("
 *   insn=0x000000000046E3A4 string=0x000000000046E3A8 "h"
 *   insn=0x000000000046E3AC string=0x000000000046E3B0 "p*"
 *   insn=0x000000000046E3B0 string=0x00000000001F8D70 "0'"
 *   insn=0x000000000046E3BC string=0x00000000001F3420 "P'"
 *   insn=0x000000000046E3C8 string=0x00000000001F5ED0 "P'"
 *   insn=0x000000000046E3EC string=0x000000000046E3F0 "LA"
 *   insn=0x000000000046E400 string=0x000000000046E404 "("
 *   insn=0x000000000046E404 string=0x000000000046E408 "iU"
 *   insn=0x000000000046E408 string=0x000000000046E40C ""
 *   insn=0x000000000046E40C string=0x000000000046E410 "IU"
 *   insn=0x000000000046E418 string=0x00000000001F3B30 "P'"
 *   insn=0x000000000046E424 string=0x000000000046E6F8 "("
 *   insn=0x000000000046E428 string=0x000000000046E42C "`%"
 *   insn=0x000000000046E460 string=0x000000000046E464 ""
 *   insn=0x000000000046E464 string=0x000000000046E468 "\t"
 *   insn=0x000000000046E468 string=0x000000000046E46C "XQ"
 *   insn=0x000000000046E470 string=0x000000000046E474 "\n"
 *   insn=0x000000000046E47C string=0x000000000046E480 "?"
 *   insn=0x000000000046E480 string=0x000000000046E484 "K"
 *   insn=0x000000000046E484 string=0x000000000046E6EC "{"
 *   insn=0x000000000046E488 string=0x000000000046E48C "`"
 *   insn=0x000000000046E498 string=0x000000000046E49C ")=G"
 *   insn=0x000000000046E49C string=0x000000000046E4A0 "!"
 *   insn=0x000000000046E4A4 string=0x000000000046E4A8 "\t"
 *   insn=0x000000000046E4A4 string=0x000000000046E4BC "\t"
 *   insn=0x000000000046E4A8 string=0x000000000046E4AC "*"
 *   insn=0x000000000046E4AC string=0x000000000046E4B0 "\n"
 *   insn=0x000000000046E4B8 string=0x000000000046E4C8 "?"
 *   insn=0x000000000046E4BC string=0x000000000046E4C0 "*"
 *   insn=0x000000000046E4C0 string=0x000000000046E4C4 "\n"
 *   insn=0x000000000046E4C8 string=0x000000000046E4CC "l"
 *   insn=0x000000000046E4D4 string=0x000000000046E4D8 "h"
 *   insn=0x000000000046E4E8 string=0x000000000046E4EC "b"
 *   insn=0x000000000046E4F0 string=0x000000000046E4F4 "!"
 *   insn=0x000000000046E500 string=0x000000000046E504 "3"
 *   insn=0x000000000046E504 string=0x000000000046E508 "`"
 *   insn=0x000000000046E504 string=0x00000000001F59D0 "P'"
 *   insn=0x000000000046E50C string=0x000000000046E510 "("
 *   insn=0x000000000046E514 string=0x000000000046E518 ":"
 *   insn=0x000000000046E518 string=0x00000000001F5200 "P'"
 *   insn=0x000000000046E524 string=0x000000000046E528 "!(""
 *   insn=0x000000000046E528 string=0x000000000046E52C "!()"
 *   insn=0x000000000046E538 string=0x000000000046E53C "q("
 *   insn=0x000000000046E53C string=0x000000000046E540 "("
 *   insn=0x000000000046E548 string=0x000000000046E54C "?"
 *   insn=0x000000000046E54C string=0x000000000046E550 " W"
 *   insn=0x000000000046E55C string=0x000000000046E560 "Y"
 *   insn=0x000000000046E564 string=0x000000000046E568 ")"
 *   insn=0x000000000046E568 string=0x000000000046E56C ")a"
 *   insn=0x000000000046E56C string=0x000000000046E570 "1"
 *   insn=0x000000000046E570 string=0x000000000046E634 """
 *   insn=0x000000000046E574 string=0x000000000046E578 "zJ"
 *   insn=0x000000000046E580 string=0x000000000046E584 "\n"
 *   insn=0x000000000046E584 string=0x000000000046E588 "J"
 *   insn=0x000000000046E588 string=0x000000000046E58C "\n"
 *   insn=0x000000000046E594 string=0x000000000046E598 "9"
 *   insn=0x000000000046E598 string=0x000000000046E59C "(@"
 *   insn=0x000000000046E59C string=0x000000000046E5A0 ""
 *   insn=0x000000000046E5A0 string=0x000000000046E5A4 "("
 *   insn=0x000000000046E5A8 string=0x000000000046E5AC "("
 *   insn=0x000000000046E5AC string=0x000000000046E5B0 "\t@"
 *   insn=0x000000000046E5B8 string=0x000000000046E5BC "(@"
 *   insn=0x000000000046E5BC string=0x000000000046E5C0 ""
 *   insn=0x000000000046E5C0 string=0x000000000046E5C4 "("
 *   insn=0x000000000046E5C8 string=0x000000000046E5CC "("
 *   insn=0x000000000046E5CC string=0x000000000046E5D0 "@"
 *   insn=0x000000000046E5E0 string=0x000000000046E5E4 "(@"
 *   insn=0x000000000046E5E4 string=0x000000000046E5E8 ""
 *   insn=0x000000000046E5E8 string=0x000000000046E5EC "("
 *   insn=0x000000000046E5EC string=0x000000000046E5F0 "!"
 *   insn=0x000000000046E5F0 string=0x000000000046E5F4 "("
 *   insn=0x000000000046E5F8 string=0x000000000046E5FC "\t@"
 *   insn=0x000000000046E600 string=0x000000000046E604 "(@"
 *   insn=0x000000000046E604 string=0x000000000046E608 ""
 *   insn=0x000000000046E608 string=0x000000000046E60C "("
 *   insn=0x000000000046E60C string=0x000000000046E610 "!"
 *   insn=0x000000000046E610 string=0x000000000046E614 "("
 *   insn=0x000000000046E618 string=0x000000000046E61C "@"
 *   insn=0x000000000046E628 string=0x000000000046E62C "\t"
 *   insn=0x000000000046E65C string=0x00000000001F9CD0 "0'"
 *   insn=0x000000000046E664 string=0x000000000046E668 ")"
 *   insn=0x000000000046E670 string=0x000000000046E674 "!"
 *   insn=0x000000000046E6C0 string=0x000000000046E6C4 "7A"
 *   insn=0x000000000046E6D0 string=0x00000000001FC610 "0'"
 *   insn=0x000000000046E6F0 string=0x000000000046E6F4 "k"
 *   insn=0x000000000046E700 string=0x000000000046E704 "a"
 *   insn=0x000000000046E730 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000046E740 string=0x000000000046E744 ""
 *   insn=0x000000000046E750 string=0x000000000046E754 "\t@"
 *   insn=0x000000000046E760 string=0x000000000046E764 ""
 *   insn=0x000000000046E770 string=0x000000000046E774 "@"
 *   insn=0x000000000046E77C string=0x000000000046E780 "/"
 *   insn=0x000000000046E78C string=0x000000000046E790 "J"
 *   insn=0x000000000046E794 string=0x000000000046E798 "(a"
 *   insn=0x000000000046E7A4 string=0x000000000046E7A8 "J=G"
 *   insn=0x000000000046E7A8 string=0x000000000046E7AC ")!"
 *   insn=0x000000000046E7AC string=0x000000000046E7B0 "*"
 *   insn=0x000000000046E7B0 string=0x000000000046E7B4 "*"
 *   insn=0x000000000046E7B0 string=0x000000000046E7D4 "*"
 *   insn=0x000000000046E7B4 string=0x000000000046E7B8 "K"
 *   insn=0x000000000046E7B8 string=0x000000000046E7BC "+"
 *   insn=0x000000000046E7C0 string=0x000000000046E7C4 "_"
 *   insn=0x000000000046E7D4 string=0x000000000046E7D8 "K"
 *   insn=0x000000000046E7D8 string=0x000000000046E7DC "+"
 *   insn=0x000000000046E7DC string=0x000000000046E7E0 "_"
 *   insn=0x000000000046E7E0 string=0x000000000046E7E4 "M"
 *   insn=0x000000000046E7F0 string=0x000000000046E7F4 "J"
 *   insn=0x000000000046E7F8 string=0x000000000046E7FC "(a"
 *   insn=0x000000000046E808 string=0x000000000046E80C "J=G"
 *   insn=0x000000000046E80C string=0x000000000046E810 ")!"
 *   insn=0x000000000046E814 string=0x000000000046E818 "*"
 *   insn=0x000000000046E814 string=0x000000000046E844 "*"
 *   insn=0x000000000046E818 string=0x000000000046E81C "K"
 *   insn=0x000000000046E81C string=0x000000000046E820 "+"
 *   insn=0x000000000046E824 string=0x000000000046E828 "_"
 *   insn=0x000000000046E83C string=0x000000000046E840 "!L"
 *   insn=0x000000000046E844 string=0x000000000046E848 "K"
 *   insn=0x000000000046E848 string=0x000000000046E84C "+"
 *   insn=0x000000000046E84C string=0x000000000046E850 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGridLayer::Draw(
        float32x2_t *this,
        Caver::RenderingContext *a2,
        const Caver::Matrix4 *a3)
{
  __int64 result; // x0
  int v7; // w8
  int v8; // w9
  int i; // w27
  int j; // w28
  unsigned int *v11; // x8
  int v12; // w9
  float32x2_t v13; // d0
  float32x2_t v14; // d2
  int v15; // w25
  __int64 v16; // x0
  __int64 v17; // x8
  char *v18; // x9
  unsigned __int64 v19; // x8
  __int64 v20; // x9
  _QWORD *v21; // x25
  __int64 v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x25
  __int64 v25; // x8
  __int64 v26; // x8
  void *v27; // x0
  _QWORD v28[2]; // [xsp+58h] [xbp-118h] BYREF
  _OWORD v29[3]; // [xsp+70h] [xbp-100h] BYREF
  __int64 v30; // [xsp+A0h] [xbp-D0h]
  float v31; // [xsp+A8h] [xbp-C8h]
  int v32; // [xsp+ACh] [xbp-C4h]
  __int64 v33; // [xsp+B8h] [xbp-B8h] BYREF
  _QWORD *v34; // [xsp+C0h] [xbp-B0h]
  _BYTE v35[52]; // [xsp+CCh] [xbp-A4h] BYREF

  *(_QWORD *)&v35[44] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !this[9].n64_u8[0] )
    Caver::SceneGridLayer::CreateVertexData((Caver::SceneGridLayer *)this);
  Caver::RenderingContext::SetTexturingEnabled(a2, 0);
  Caver::RenderingContext::UseProgram(a2, 0);
  Caver::RenderingContext::SetMatrix(a2, a3);
  Caver::RenderingContext::SetVertexAttribPointer();
  result = Caver::RenderingContext::DrawArrays(
             a2,
             1,
             0,
             -1431655765 * (unsigned int)((this[11].n64_u64[0] - this[10].n64_u64[0]) >> 2));
  v7 = this[5].n64_i32[1];
  if ( v7 >= 1 )
  {
    v8 = this[5].n64_i32[0];
    for ( i = 0; i < v7; ++i )
    {
      if ( v8 >= 1 )
      {
        for ( j = 0; j < v8; ++j )
        {
          v13.n64_u64[0] = this[3].n64_u64[0];
          v14.n64_f32[0] = (float)j;
          v14.n64_f32[1] = (float)i;
          v28[0] = vadd_f32(this[1], vmul_f32(v13, v14)).n64_u64[0];
          v28[1] = v13.n64_u64[0];
          result = Caver::Rectangle::IntersectsWithRect((Caver::Rectangle *)v28, (const Caver::Rectangle *)&this[7]);
          if ( (result & 1) != 0 )
          {
            if ( !this[13].n64_u64[0] )
            {
              Caver::Font::SystemFont(&v33, (Caver::Font *)result);
              v20 = v33;
              v19 = (unsigned __int64)v34;
              if ( v34 )
                ++v34[1];
              v21 = (_QWORD *)this[14].n64_u64[0];
              this[13].n64_u64[0] = v20;
              this[14].n64_u64[0] = v19;
              if ( v21 )
              {
                v22 = v21[1] - 1LL;
                v21[1] = v22;
                if ( !v22 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
                  v23 = v21[2] - 1LL;
                  v21[2] = v23;
                  if ( !v23 )
                    (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
                }
              }
              v24 = v34;
              if ( v34 )
              {
                v25 = v34[1] - 1LL;
                v34[1] = v25;
                if ( !v25 )
                {
                  (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
                  v26 = v24[2] - 1LL;
                  v24[2] = v26;
                  if ( !v26 )
                    (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
                }
              }
            }
            Caver::FontText::Clear((Caver::FontText *)&this[13]);
            v15 = *(_DWORD *)(this[6].n64_u64[0] + 16LL * (j + this[5].n64_u32[0] * i) + 8);
            *(_QWORD *)&v29[0] = &byte_6FD2F8;
            v16 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
            v17 = v16;
            if ( v15 < 0 )
            {
              *(_BYTE *)(v16 - 1) = 45;
              v17 = v16 - 1;
              v18 = *(char **)&v29[0];
            }
            else
            {
              v18 = &byte_6FD2F8;
            }
            sub_569E1C(v29, 0, *((_QWORD *)v18 - 3), v17, &v35[-v17]);
            Caver::FontText::AddText();
            v27 = (void *)(*(_QWORD *)&v29[0] - 24LL);
            if ( (__int64 *)(*(_QWORD *)&v29[0] - 24LL) != &qword_6FD2E0 )
            {
              v11 = (unsigned int *)(*(_QWORD *)&v29[0] - 8LL);
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
                operator delete(v27);
            }
            v31 = (float)(this->n64_f32[0] + this->n64_f32[1]) * 0.5;
            v30 = 0;
            v32 = 1065353216;
            v29[0] = xmmword_583490;
            v29[1] = xmmword_5837E0;
            v29[2] = xmmword_5837F0;
            C_Matrix4Mul((const float *)a3, (const float *)v29, (float *)&v33);
            Caver::RenderingContext::SetMatrix(a2, (const Caver::Matrix4 *)&v33);
            result = Caver::FontText::Draw((Caver::FontText *)&this[13], a2);
          }
          v8 = this[5].n64_i32[0];
        }
        v7 = this[5].n64_i32[1];
      }
    }
  }
  return result;
}

