/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200550
 * Mangled: ._ZN5Caver6Camera24SetPerspectiveProjectionEffff
 * Demangled: Caver::Camera::SetPerspectiveProjection(float,float,float,float)
 *
 * Callers: 2
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *   0x0000000000371F64  Caver::SceneView::SceneView(void)
 *
 * Callees: 1
 *   0x0000000000457A10  Caver::Camera::SetPerspectiveProjection(float,float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200558 string=0x000000000020055C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Camera::SetPerspectiveProjection(Caver::Camera *this, float a2, float a3, float a4, float a5)
{
  return _ZN5Caver6Camera24SetPerspectiveProjectionEffff(this, a2, a3, a4, a5);
}

