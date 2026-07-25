/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA220
 * Mangled: _ZN5Caver16GUITextFieldImpl10UpdateTextEv
 * Demangled: Caver::GUITextFieldImpl::UpdateText(void)
 *
 * Callers: 1
 *   0x00000000001F50A0  Caver::GUITextFieldImpl::UpdateText(void)
 *
 * Callees: 4
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 44
 *   insn=0x00000000004BA230 string=0x00000000004BA234 "U"
 *   insn=0x00000000004BA24C string=0x00000000004BA250 """
 *   insn=0x00000000004BA250 string=0x00000000004BA254 "a"
 *   insn=0x00000000004BA254 string=0x00000000004BA258 "("
 *   insn=0x00000000004BA258 string=0x00000000004BA25C "_"
 *   insn=0x00000000004BA25C string=0x00000000004BA260 "a"
 *   insn=0x00000000004BA264 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004BA26C string=0x00000000004BA270 "`"
 *   insn=0x00000000004BA270 string=0x00000000004BA274 ""
 *   insn=0x00000000004BA27C string=0x00000000001F8510 "0'"
 *   insn=0x00000000004BA288 string=0x00000000004BA28C "\t"
 *   insn=0x00000000004BA290 string=0x00000000004BA294 " "
 *   insn=0x00000000004BA298 string=0x00000000004BA29C "i"D9"
 *   insn=0x00000000004BA2A8 string=0x00000000004BA2AC "i&D9"
 *   insn=0x00000000004BA2B0 string=0x00000000004BA2B4 "!"
 *   insn=0x00000000004BA2B8 string=0x00000000004BA2BC "i*D9"
 *   insn=0x00000000004BA2C8 string=0x00000000004BA2CC "i.D9"
 *   insn=0x00000000004BA2D0 string=0x00000000004BA2D4 "`"
 *   insn=0x00000000004BA2D8 string=0x00000000004BA2DC "t"
 *   insn=0x00000000004BA2E0 string=0x00000000004BA2E4 "h\n"
 *   insn=0x00000000004BA2E8 string=0x00000000004BA2EC "t"
 *   insn=0x00000000004BA2EC string=0x00000000004BA2F0 "2"
 *   insn=0x00000000004BA2F4 string=0x00000000004BA2F8 "a"
 *   insn=0x00000000004BA2FC string=0x00000000004BA300 "("
 *   insn=0x00000000004BA300 string=0x00000000004BA304 "_"
 *   insn=0x00000000004BA304 string=0x00000000004BA308 "a"
 *   insn=0x00000000004BA310 string=0x00000000004BA32C "h"D9"
 *   insn=0x00000000004BA314 string=0x00000000004BA318 "`"
 *   insn=0x00000000004BA320 string=0x00000000004BA324 "{"
 *   insn=0x00000000004BA330 string=0x00000000004BA334 "A"
 *   insn=0x00000000004BA334 string=0x00000000004BA338 "h&D9"
 *   insn=0x00000000004BA334 string=0x00000000004BA35C "t"
 *   insn=0x00000000004BA340 string=0x00000000004BA344 "h*D9"
 *   insn=0x00000000004BA34C string=0x00000000004BA350 "h.D9"
 *   insn=0x00000000004BA354 string=0x00000000004BA358 "@"
 *   insn=0x00000000004BA35C string=0x00000000004BA360 ""
 *   insn=0x00000000004BA360 string=0x00000000004BA368 "h\n"
 *   insn=0x00000000004BA370 string=0x00000000004BA374 "4"
 *   insn=0x00000000004BA378 string=0x00000000004BA37C ""
 *   insn=0x00000000004BA38C string=0x00000000004BA390 "\t@"
 *   insn=0x00000000004BA398 string=0x00000000004BA39C ""
 *   insn=0x00000000004BA3AC string=0x00000000004BA3B0 "@"
 *   insn=0x00000000004BA3B8 string=0x00000000004BA3BC "U"
 *   insn=0x00000000004BA3E4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::UpdateText(Caver::GUITextFieldImpl *this)
{
  _QWORD *v2; // x0
  __int64 v3; // x19
  size_t v4; // x2
  _QWORD *v5; // x1
  __int64 result; // x0
  int v7; // w8
  _QWORD *v8; // x20
  _QWORD *v9; // x0
  _QWORD *v10; // x1
  size_t v11; // x2
  __int64 v12; // x8
  __int64 v13; // x8
  int v14; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v15; // [xsp+8h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (_QWORD *)*((_QWORD *)this + 49);
  v3 = *((_QWORD *)this + 41);
  v4 = *(v2 - 3);
  if ( v4 )
  {
    v5 = *(_QWORD **)(v3 + 256);
    if ( v4 != *(v5 - 3) || memcmp(v2, v5, v4) )
    {
      sub_56A6A8(v3 + 256);
      Caver::GUILabel::UpdateText((Caver::GUILabel *)v3);
      v3 = *((_QWORD *)this + 41);
    }
    result = (__int64)(*(_QWORD *(__fastcall **)(int *__return_ptr, Caver::GUITextFieldImpl *))(*(_QWORD *)this + 328LL))(
                        &v14,
                        this);
    if ( (unsigned __int8)v14 != *(unsigned __int8 *)(v3 + 264)
      || __PAIR64__(BYTE2(v14), BYTE1(v14)) != __PAIR64__(
                                                 *(unsigned __int8 *)(v3 + 266),
                                                 *(unsigned __int8 *)(v3 + 265))
      || HIBYTE(v14) != *(unsigned __int8 *)(v3 + 267) )
    {
      v7 = v14;
      v8 = *(_QWORD **)(v3 + 280);
      *(_QWORD *)(v3 + 272) = 0;
      *(_DWORD *)(v3 + 264) = v7;
      *(_QWORD *)(v3 + 280) = 0;
      if ( !v8 )
        return Caver::GUILabel::UpdateText((Caver::GUILabel *)v3);
      goto LABEL_18;
    }
  }
  else
  {
    v9 = (_QWORD *)*((_QWORD *)this + 50);
    v10 = *(_QWORD **)(v3 + 256);
    v11 = *(v9 - 3);
    if ( v11 != *(v10 - 3) || (result = memcmp(v9, v10, v11), (_DWORD)result) )
    {
      sub_56A6A8(v3 + 256);
      result = Caver::GUILabel::UpdateText((Caver::GUILabel *)v3);
      v3 = *((_QWORD *)this + 41);
    }
    if ( *(unsigned __int8 *)(v3 + 264) != 128
      || *(unsigned __int8 *)(v3 + 265) != 128
      || *(unsigned __int8 *)(v3 + 266) != 128
      || *(unsigned __int8 *)(v3 + 267) != 255 )
    {
      v8 = *(_QWORD **)(v3 + 280);
      *(_DWORD *)(v3 + 264) = -8355712;
      *(_QWORD *)(v3 + 272) = 0;
      *(_QWORD *)(v3 + 280) = 0;
      if ( !v8 )
        return Caver::GUILabel::UpdateText((Caver::GUILabel *)v3);
LABEL_18:
      v12 = v8[1] - 1LL;
      v8[1] = v12;
      if ( !v12 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
        v13 = v8[2] - 1LL;
        v8[2] = v13;
        if ( !v13 )
          (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
      }
      return Caver::GUILabel::UpdateText((Caver::GUILabel *)v3);
    }
  }
  return result;
}

