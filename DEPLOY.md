# 🚀 Quick Deployment Guide

## Deploy to Netlify (Fastest - Recommended)

### Method 1: Drag & Drop (30 seconds)
1. Go to [app.netlify.com/drop](https://app.netlify.com/drop)
2. Drag the entire `NASA-ASCEND-Website` folder
3. Wait for deployment (usually 10-20 seconds)
4. Your site is live! Get a URL like `https://random-name-123.netlify.app`
5. (Optional) Add custom domain in Site settings → Domain management

### Method 2: GitHub Integration (Best for updates)
1. Push code to GitHub:
   ```bash
   git init
   git add .
   git commit -m "NASA ASCEND website"
   git branch -M main
   git remote add origin https://github.com/YOUR_USERNAME/nasa-ascend-website.git
   git push -u origin main
   ```

2. Connect to Netlify:
   - Go to [app.netlify.com](https://app.netlify.com)
   - Click "Add new site" → "Import an existing project"
   - Select GitHub → Choose your repository
   - Build settings: Leave empty (static site)
   - Publish directory: `/` (root)
   - Click "Deploy site"

3. **Auto-deploy**: Every git push automatically updates the site!

## Deploy to GitHub Pages (Free)

1. **Create GitHub Repository:**
   ```bash
   git init
   git add .
   git commit -m "NASA ASCEND website"
   git branch -M main
   git remote add origin https://github.com/YOUR_USERNAME/nasa-ascend-website.git
   git push -u origin main
   ```

2. **Enable GitHub Pages:**
   - Go to repository → Settings → Pages
   - Source: Deploy from branch
   - Branch: `main` / Folder: `/ (root)`
   - Click Save
   - Site URL: `https://YOUR_USERNAME.github.io/nasa-ascend-website/`

3. **Custom Domain (Optional):**
   - Add `CNAME` file with your domain: `nasaascend.net`
   - Update DNS records as instructed

## Deploy to Vercel (Fast & Free)

1. **Via Dashboard:**
   - Go to [vercel.com](https://vercel.com)
   - Click "Add New Project"
   - Import from GitHub (or drag & drop)
   - Framework: Other
   - Click Deploy

2. **Via CLI:**
   ```bash
   npm install -g vercel
   vercel
   ```

## Deploy to Custom Domain/Hosting

### For nasaascend.net:

1. **Upload Files via FTP/SFTP:**
   - Connect to your web server
   - Upload: `index.html`, `styles.css`, `script.js`
   - Ensure all files are in the root directory (or same folder)

2. **Recommended Hosting Providers:**
   - **Namecheap**: Shared hosting ($3-5/month)
   - **Bluehost**: WordPress hosting (can host static sites)
   - **AWS S3 + CloudFront**: Scalable, pay-per-use
   - **Google Cloud Storage**: Similar to AWS

3. **DNS Configuration:**
   - Point `nasaascend.net` to your hosting provider
   - Add `www` subdomain if needed
   - SSL certificate (usually automatic with modern hosts)

## Post-Deployment Checklist

- [ ] Test all navigation links
- [ ] Verify videos load correctly
- [ ] Check mobile responsiveness
- [ ] Test Student Portal access
- [ ] Verify Google Drive file restrictions
- [ ] Check site speed (use PageSpeed Insights)
- [ ] Set up Google Analytics (optional)
- [ ] Configure custom domain (if applicable)
- [ ] Test contact email links
- [ ] Verify all images load

## Troubleshooting

### Site Not Loading
- Check file paths (should be relative, not absolute)
- Verify `index.html` is in root directory
- Check browser console for errors

### Videos Not Showing
- Verify YouTube embed URLs are correct
- Check Google Drive sharing settings
- Ensure iframe permissions are set

### Student Portal Issues
- Verify Google Drive file ID is correct
- Check file sharing restrictions
- Test with Maricopa.edu account

## Need Help?

- **Email**: ascend@phoenixcollege.edu
- **GitHub Issues**: Create an issue in the repository

---

**Ready to launch! 🚀**
