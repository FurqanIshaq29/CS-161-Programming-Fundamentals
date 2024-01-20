//------------------Collision woth the Player
void bulletCollisionWithPlayerRightEnemy1()

{
    for (int x = 0; x < bulletCountRightEnemy1; x++)
    {
        if (enemy1BulletRightX[x] + 1 == pX && (enemy1BulletRightY[x] == pY || enemy1BulletRightY[x] == pY + 1 || enemy1BulletRightY[x] == pY + 2))
        {
            healthCounter--;
            eraseBulletRightEnemy1(enemy1BulletRightX[x], enemy1BulletRightY[x]);
            removeBulletfromArrayRightEnemy1(x);
        }
    }
}
void bulletCollisionWithPlayerRightEnemy2()
{
    for (int x = 0; x < bulletCountRightEnemy2; x++)
    {
        if (enemy2BulletRightX[x] + 1 == pX && (enemy2BulletRightY[x] == pY || enemy2BulletRightY[x] == pY + 1 || enemy2BulletRightY[x] == pY + 2))
        {
            healthCounter--;
            eraseBulletRightEnemy2(enemy2BulletRightX[x], enemy2BulletRightY[x]);
            removeBulletfromArrayRightEnemy2(x);
        }
    }
}
void bulletCollisionWithPlayerRightEnemy3()
{
    for (int x = 0; x < bulletCountRightEnemy3; x++)

    {
        if (enemy3BulletRightX[x] + 1 == pX && (enemy3BulletRightY[x] == pY || enemy3BulletRightY[x] == pY + 1 || enemy3BulletRightY[x] == pY + 2))
        {
            healthCounter--;
            eraseBulletRightEnemy3(enemy3BulletRightX[x], enemy3BulletRightY[x]);
            removeBulletfromArrayRightEnemy3(x);
        }
    }
}
void bulletCollisionWithPlayerRightEnemy4()
{
    for (int x = 0; x < bulletCountRightEnemy4; x++)

    {
        if (enemy4BulletRightX[x] + 1 == pX && (enemy4BulletRightY[x] == pY || enemy4BulletRightY[x] == pY + 1 || enemy4BulletRightY[x] == pY + 2))
        {
            healthCounter--;

            eraseBulletRightEnemy4(enemy4BulletRightX[x], enemy4BulletRightY[x]);
            removeBulletfromArrayRightEnemy4(x);
        }
    }
}