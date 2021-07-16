/*
 *   SPDX-FileCopyrightText: 2021 Aleix Pol Gonzalez <aleixpol@kde.org>
 *
 *   SPDX-License-Identifier: LGPL-2.0-or-later
 */

#ifndef STARTUPNOTIFIER_H
#define STARTUPNOTIFIER_H

#include <QObject>

namespace KWayland
{
namespace Client
{
class PlasmaActivation;
}
}

class StartupNotifier : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool isValid READ isValid CONSTANT)
public:
    StartupNotifier(QObject *parent = nullptr);
    bool isValid() const;

Q_SIGNALS:
    void activationStarted(const QString &appId, const QString &iconName);
    void activationFinished();
};

#endif
