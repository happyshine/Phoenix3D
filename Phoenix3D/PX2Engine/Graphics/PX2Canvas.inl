// PX2Canvas.inl

//----------------------------------------------------------------------------
inline bool Canvas::IsMain() const
{
	return mIsMain;
}
//----------------------------------------------------------------------------
inline Camera *Canvas::GetOverCamera()
{
	return mOverCamera;
}
//----------------------------------------------------------------------------
inline Node *Canvas::GetRenderNode()
{
	return mRenderNode;
}
//----------------------------------------------------------------------------
inline RenderWindow *Canvas::GetRenderWindow()
{
	return mRenderWindow;
}
//----------------------------------------------------------------------------
inline const Sizef &Canvas::GetScreenSize() const
{
	return mScreenSize;
}
//----------------------------------------------------------------------------
inline const Rectf &Canvas::GetViewPort() const
{
	return mViewPort;
}
//----------------------------------------------------------------------------
inline void Canvas::SetPriority(int priority)
{
	mPriority = priority;
}
//----------------------------------------------------------------------------
inline int Canvas::GetPriority() const
{
	return mPriority;
}
//----------------------------------------------------------------------------
inline bool Canvas::IsPickOnlyInSizeRange() const
{
	return mIsPickOnlyInSizeRange;
}
//----------------------------------------------------------------------------
inline bool Canvas::IsMoved() const
{
	return mIsMoved;
}
//----------------------------------------------------------------------------
inline bool Canvas::IsLeftPressed() const
{
	return mIsLeftPressed;
}
//----------------------------------------------------------------------------
inline bool Canvas::IsRightPressed() const
{
	return mIsRightPressed;
}
//----------------------------------------------------------------------------
inline bool Canvas::IsMiddlePressed() const
{
	return mIsMiddlePressed;
}
//----------------------------------------------------------------------------
inline const APoint &Canvas::GetCurPickPos() const
{
	return mCurPickPos;
}
//----------------------------------------------------------------------------
inline const AVector &Canvas::GetMoveDelta() const
{
	return mMoveDelta;
}
//----------------------------------------------------------------------------
inline Polysegment *Canvas::GetDebugLine()
{
	return mDebugPoly;
}
//----------------------------------------------------------------------------
inline const Float4 &Canvas::GetClearColor() const
{
	return mClearColor;
}
//----------------------------------------------------------------------------
inline float Canvas::GetClearDepth() const
{
	return mClearDepth;
}
//----------------------------------------------------------------------------
inline unsigned int Canvas::GetClearStencil() const
{
	return mClearStencil;
}
//----------------------------------------------------------------------------
inline void Canvas::GetClearFlag(bool &color, bool &depth, bool &stencil)
{
	color = mClearFlagColor;
	depth = mClearFlagDepth;
	stencil = mClearFlagStencil;
}
//----------------------------------------------------------------------------