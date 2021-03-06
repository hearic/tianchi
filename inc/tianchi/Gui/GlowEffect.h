// **************************************************************************
// Tianchi C++ library for Qt (open source)
// 天池共享源码库
// 版权所有 (C) 天池共享源码库开发组
// 授权协议：请阅读天池共享源码库附带的授权协议
// **************************************************************************
// 文档说明：发光效果的QGraphicsEffect
// ==========================================================================
// 开发日志：
// 日期         人员        说明
// --------------------------------------------------------------------------
// 2012.08.23   roywillow   原创
// 2013.04.22   XChinux     修改
//
// ==========================================================================
/// @file GlowEffect.h 发光效果的QGraphicsEffect
// ==========================================================================
/**
 *
 * Usage: 
 *  GlowEffect *effect = new GlowEffect(this);
 *  effect->setRadius(5);
 *  effect->setGlowColor(Qt::blue);
 *  lbl->setGraphicsEffect(effect);
 */
#ifndef TIANCHI_GLOWEFFECT_H
#define TIANCHI_GLOWEFFECT_H

#include <tianchi/Global.h>
#include <QGraphicsEffect>

namespace Tianchi
{
class GlowEffectPrivate;

class TIANCHI_API GlowEffect : public QGraphicsEffect
{
    Q_OBJECT
public:
    GlowEffect(QObject *parent = 0);
    virtual ~GlowEffect();

    /// @brief set radius
    /// @param [in] int radius
    void setRadius(int radius);
    /// @brief set glow color
    /// @param [in] QColor  color
    void setGlowColor(const QColor &color);
    virtual QRectF boundingRectFor(const QRectF &sourceRect) const;
protected:
    virtual void draw(QPainter *painter);
    virtual void sourceChanged(ChangeFlags flags);

private:
    Q_DISABLE_COPY(GlowEffect)
    Q_DECLARE_PRIVATE(GlowEffect)
    GlowEffectPrivate *d_ptr;
};

}

typedef ::Tianchi::GlowEffect TcGlowEffect;
#endif // GLOWEFFECT_H
