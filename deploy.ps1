# NASA ASCEND Website Deployment Script
# This script helps deploy the website to various platforms

Write-Host "🚀 NASA ASCEND Website Deployment" -ForegroundColor Cyan
Write-Host "================================" -ForegroundColor Cyan
Write-Host ""

# Check if Netlify CLI is installed
$netlifyInstalled = Get-Command netlify -ErrorAction SilentlyContinue

if (-not $netlifyInstalled) {
    Write-Host "📦 Installing Netlify CLI..." -ForegroundColor Yellow
    npm install -g netlify-cli
    Write-Host "✅ Netlify CLI installed!" -ForegroundColor Green
}

Write-Host ""
Write-Host "Choose deployment method:" -ForegroundColor Cyan
Write-Host "1. Netlify (Recommended - Fast & Free)" -ForegroundColor White
Write-Host "2. GitHub Pages (Free)" -ForegroundColor White
Write-Host "3. Vercel (Fast & Free)" -ForegroundColor White
Write-Host "4. Show deployment instructions" -ForegroundColor White
Write-Host ""

$choice = Read-Host "Enter choice (1-4)"

switch ($choice) {
    "1" {
        Write-Host ""
        Write-Host "🌐 Deploying to Netlify..." -ForegroundColor Cyan
        Write-Host "You can either:" -ForegroundColor Yellow
        Write-Host "  A) Drag & drop this folder to: https://app.netlify.com/drop" -ForegroundColor White
        Write-Host "  B) Use Netlify CLI (requires login)" -ForegroundColor White
        Write-Host ""
        $netlifyChoice = Read-Host "Use CLI? (y/n)"
        if ($netlifyChoice -eq "y") {
            netlify login
            netlify deploy --prod
        } else {
            Write-Host ""
            Write-Host "👉 Open https://app.netlify.com/drop in your browser" -ForegroundColor Green
            Write-Host "👉 Drag this folder to deploy" -ForegroundColor Green
        }
    }
    "2" {
        Write-Host ""
        Write-Host "📚 GitHub Pages Deployment:" -ForegroundColor Cyan
        Write-Host "1. Create a new repository on GitHub" -ForegroundColor White
        Write-Host "2. Run these commands:" -ForegroundColor White
        Write-Host ""
        Write-Host "   git remote add origin https://github.com/YOUR_USERNAME/nasa-ascend-website.git" -ForegroundColor Yellow
        Write-Host "   git branch -M main" -ForegroundColor Yellow
        Write-Host "   git push -u origin main" -ForegroundColor Yellow
        Write-Host ""
        Write-Host "3. Go to repository Settings → Pages → Enable" -ForegroundColor White
    }
    "3" {
        Write-Host ""
        Write-Host "⚡ Vercel Deployment:" -ForegroundColor Cyan
        $vercelInstalled = Get-Command vercel -ErrorAction SilentlyContinue
        if (-not $vercelInstalled) {
            Write-Host "Installing Vercel CLI..." -ForegroundColor Yellow
            npm install -g vercel
        }
        Write-Host "Deploying to Vercel..." -ForegroundColor Yellow
        vercel --prod
    }
    "4" {
        Write-Host ""
        Write-Host "📖 Deployment Instructions:" -ForegroundColor Cyan
        Write-Host ""
        Write-Host "See DEPLOY.md or DEPLOY_INSTRUCTIONS.md for detailed instructions" -ForegroundColor White
        Write-Host ""
        Write-Host "Quick Deploy (Netlify - 30 seconds):" -ForegroundColor Green
        Write-Host "1. Go to: https://app.netlify.com/drop" -ForegroundColor White
        Write-Host "2. Drag this folder" -ForegroundColor White
        Write-Host "3. Done! Site is live." -ForegroundColor White
    }
    default {
        Write-Host "Invalid choice" -ForegroundColor Red
    }
}

Write-Host ""
Write-Host "✅ Deployment process started!" -ForegroundColor Green
Write-Host ""
