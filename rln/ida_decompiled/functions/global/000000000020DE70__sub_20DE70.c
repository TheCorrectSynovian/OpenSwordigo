/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020DE70
 * Mangled: sub_20DE70
 * Demangled: sub_20DE70
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F7E90  CPVRTString::CPVRTString(void)
 *   0x0000000000513DC0  CPVRTMemoryFileSystem::CAtExit::~CAtExit()
 *   0x00000000005144C8  CPVRTString::~CPVRTString()
 *
 * Referenced strings: 6
 *   insn=0x000000000020DE7C string=0x000000000020DE80 "s"
 *   insn=0x000000000020DE88 string=0x00000000001F7E90 "0'"
 *   insn=0x000000000020DEA0 string=0x000000000020DEA4 "g"
 *   insn=0x000000000020DEA4 string=0x00000000001F4C40 "P'"
 *   insn=0x000000000020DEB0 string=0x000000000020DEB4 "!"
 *   insn=0x000000000020DEC0 string=0x000000000020DEC4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 sub_20DE70()
{
  CPVRTString::CPVRTString((CPVRTString *)&CPVRTResourceFile::s_ReadPath);
  __cxa_atexit((void (*)(void *))CPVRTString::~CPVRTString, &CPVRTResourceFile::s_ReadPath, &off_6E8000);
  return __cxa_atexit(
           (void (*)(void *))CPVRTMemoryFileSystem::CAtExit::~CAtExit,
           &CPVRTMemoryFileSystem::s_AtExit,
           &off_6E8000);
}

