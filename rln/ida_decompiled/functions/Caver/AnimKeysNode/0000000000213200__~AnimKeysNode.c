/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000213200
 * Mangled: _ZN5Caver12AnimKeysNodeD2Ev
 * Demangled: Caver::AnimKeysNode::~AnimKeysNode()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5400  Caver::FloatDataBuffer::~FloatDataBuffer()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 41
 *   insn=0x000000000021320C string=0x0000000000213210 "yG"
 *   insn=0x0000000000213214 string=0x0000000000213218 "A"
 *   insn=0x0000000000213218 string=0x000000000021321C ""
 *   insn=0x000000000021321C string=0x0000000000213220 "x"
 *   insn=0x0000000000213220 string=0x0000000000213224 "s"
 *   insn=0x0000000000213220 string=0x00000000001F5400 "P'"
 *   insn=0x0000000000213224 string=0x0000000000213228 "3"
 *   insn=0x0000000000213228 string=0x000000000021322C "h"
 *   insn=0x000000000021322C string=0x0000000000213230 ""
 *   insn=0x0000000000213230 string=0x0000000000213234 "h"
 *   insn=0x0000000000213238 string=0x000000000021323C "h"
 *   insn=0x000000000021323C string=0x0000000000213240 "\t@"
 *   insn=0x0000000000213248 string=0x000000000021324C "h\n@"
 *   insn=0x000000000021324C string=0x0000000000213250 ""
 *   insn=0x0000000000213250 string=0x0000000000213254 "h\n"
 *   insn=0x0000000000213258 string=0x000000000021325C "h"
 *   insn=0x000000000021325C string=0x0000000000213260 "@"
 *   insn=0x0000000000213280 string=0x0000000000213284 "t"
 *   insn=0x0000000000213288 string=0x000000000021328C "4"
 *   insn=0x0000000000213290 string=0x0000000000213294 ""
 *   insn=0x00000000002132A0 string=0x00000000002132A4 "\t@"
 *   insn=0x00000000002132B0 string=0x00000000002132B4 ""
 *   insn=0x00000000002132C0 string=0x00000000002132C4 "@"
 *   insn=0x00000000002132D0 string=0x00000000002132D4 "|"
 *   insn=0x00000000002132EC string=0x00000000002132F0 "yG"
 *   insn=0x00000000002132F4 string=0x00000000002132F8 "A"
 *   insn=0x00000000002132F8 string=0x00000000002132FC ""
 *   insn=0x00000000002132FC string=0x0000000000213300 "@"
 *   insn=0x0000000000213300 string=0x0000000000213304 "t"
 *   insn=0x0000000000213304 string=0x0000000000213308 "4"
 *   insn=0x000000000021330C string=0x0000000000213310 ""
 *   insn=0x000000000021331C string=0x0000000000213320 "\t@"
 *   insn=0x000000000021332C string=0x0000000000213330 ""
 *   insn=0x000000000021333C string=0x0000000000213340 "@"
 *   insn=0x000000000021335C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021336C string=0x0000000000213370 "5"
 *   insn=0x0000000000213374 string=0x0000000000213378 ""
 *   insn=0x0000000000213384 string=0x0000000000213388 "\t@"
 *   insn=0x0000000000213394 string=0x0000000000213398 ""
 *   insn=0x00000000002133A4 string=0x00000000002133A8 "@"
 *   insn=0x00000000002133BC string=0x00000000002133C0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AnimKeysNode::~AnimKeysNode(Caver::AnimKeysNode *this)
{
  _QWORD *v2; // x19
  __int64 v3; // x8
  __int64 v4; // x8

  *(_QWORD *)this = off_6B9210;
  Caver::FloatDataBuffer::~FloatDataBuffer((Caver::AnimKeysNode *)((char *)this + 64));
  v2 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
}

